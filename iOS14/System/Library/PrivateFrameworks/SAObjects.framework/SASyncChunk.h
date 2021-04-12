/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, SASyncAppMetaData, NSArray;

@interface SASyncChunk : SABaseClientBoundCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,retain) SASyncAppMetaData * appMetaData; 
@property (nonatomic,copy) NSString * intentSlotName; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSString * postGen; 
@property (nonatomic,copy) NSString * preGen; 
@property (nonatomic,copy) NSArray * toAdd; 
@property (nonatomic,copy) NSArray * toRemove; 
@property (nonatomic,copy) NSString * validity; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)chunk;
+(id)chunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(NSArray *)toAdd;
-(BOOL)requiresResponse;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)preGen;
-(NSString *)validity;
-(NSString *)postGen;
-(NSString *)key;
-(void)setAppMetaData:(SASyncAppMetaData *)arg1 ;
-(NSString *)intentSlotName;
-(void)setPostGen:(NSString *)arg1 ;
-(void)setPreGen:(NSString *)arg1 ;
-(void)setToAdd:(NSArray *)arg1 ;
-(void)setToRemove:(NSArray *)arg1 ;
-(BOOL)mutatingCommand;
-(NSArray *)toRemove;
-(SASyncAppMetaData *)appMetaData;
-(void)setKey:(NSString *)arg1 ;
-(void)setIntentSlotName:(NSString *)arg1 ;
@end

