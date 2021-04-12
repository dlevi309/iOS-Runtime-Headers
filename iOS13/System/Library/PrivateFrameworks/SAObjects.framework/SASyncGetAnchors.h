/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)getAnchors;
+(id)getAnchorsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)sources;
-(void)setSources:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
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
@end

