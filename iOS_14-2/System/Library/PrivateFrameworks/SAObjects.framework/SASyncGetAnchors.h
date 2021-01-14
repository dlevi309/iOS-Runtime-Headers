/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSDictionary, NSString;

@interface SASyncGetAnchors : SABaseClientBoundCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * appMetaDataList; 
@property (nonatomic,copy) NSDictionary * customVocabSources; 
@property (assign,nonatomic) BOOL includeAllKnownAnchors; 
@property (nonatomic,copy) NSArray * sources; 
@property (nonatomic,copy) NSString * syncReason; 
@property (nonatomic,copy) NSArray * watchAppMetaDataList; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getAnchors;
+(id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSources:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)sources;
-(NSArray *)appMetaDataList;
-(void)setAppMetaDataList:(NSArray *)arg1 ;
-(NSDictionary *)customVocabSources;
-(void)setCustomVocabSources:(NSDictionary *)arg1 ;
-(BOOL)includeAllKnownAnchors;
-(void)setIncludeAllKnownAnchors:(BOOL)arg1 ;
-(NSString *)syncReason;
-(void)setSyncReason:(NSString *)arg1 ;
-(NSArray *)watchAppMetaDataList;
-(void)setWatchAppMetaDataList:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
@end

