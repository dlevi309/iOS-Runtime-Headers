/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)chunk;
+(id)chunkWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)appBundleId;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)validity;
-(void)setValidity:(NSString *)arg1 ;
-(NSString *)intentSlotName;
-(void)setIntentSlotName:(NSString *)arg1 ;
-(id)encodedClassName;
-(SASyncAppMetaData *)appMetaData;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setAppMetaData:(SASyncAppMetaData *)arg1 ;
-(NSString *)postGen;
-(void)setPostGen:(NSString *)arg1 ;
-(NSString *)preGen;
-(void)setPreGen:(NSString *)arg1 ;
-(NSArray *)toAdd;
-(void)setToAdd:(NSArray *)arg1 ;
-(NSArray *)toRemove;
-(void)setToRemove:(NSArray *)arg1 ;
@end

