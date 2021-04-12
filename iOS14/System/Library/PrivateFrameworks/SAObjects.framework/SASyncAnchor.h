/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SASyncAppMetaData, NSNumber;

@interface SASyncAnchor : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * appBundleId; 
@property (nonatomic,retain) SASyncAppMetaData * appMetaData; 
@property (assign,nonatomic) long long count; 
@property (nonatomic,copy) NSString * generation; 
@property (nonatomic,copy) NSString * intentSlotName; 
@property (nonatomic,copy) NSString * key; 
@property (nonatomic,copy) NSNumber * suspendDurationInSeconds; 
@property (nonatomic,copy) NSString * suspendReason; 
@property (nonatomic,copy) NSString * validity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_af_normalizedKeyForKey:(id)arg1 appBundleID:(id)arg2 syncSlotName:(id)arg3 ;
+(id)anchorWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)anchor;
-(id)_af_normalizedKey;
-(BOOL)_af_isValid;
-(void)setCount:(long long)arg1 ;
-(void)setGeneration:(NSString *)arg1 ;
-(NSString *)generation;
-(id)groupIdentifier;
-(void)setAppBundleId:(NSString *)arg1 ;
-(NSString *)appBundleId;
-(id)encodedClassName;
-(void)setValidity:(NSString *)arg1 ;
-(long long)count;
-(NSString *)validity;
-(NSString *)key;
-(void)setAppMetaData:(SASyncAppMetaData *)arg1 ;
-(NSNumber *)suspendDurationInSeconds;
-(void)setSuspendDurationInSeconds:(NSNumber *)arg1 ;
-(NSString *)suspendReason;
-(void)setSuspendReason:(NSString *)arg1 ;
-(NSString *)intentSlotName;
-(SASyncAppMetaData *)appMetaData;
-(void)setKey:(NSString *)arg1 ;
-(void)setIntentSlotName:(NSString *)arg1 ;
@end

