/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class PBCodable, NSString;


@protocol INIntentExport <NSObject,JSExport>
@property (nonatomic,copy) PBCodable * backingStore; 
@property (nonatomic,readonly) NSString * utteranceString; 
@property (nonatomic,readonly) NSString * launchId; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,readonly) NSString * intentId; 
@property (nonatomic,readonly) NSString * typeName; 
@required
+(id)intentDescription;
+(NSString *)typeName;
-(id)init;
-(PBCodable *)backingStore;
-(NSString *)launchId;
-(NSString *)utteranceString;
-(void)trimDataAgainstTCCForAuditToken:(SCD_Struct_IN2)arg1 bundle:(id)arg2;
-(NSString *)typeName;
-(NSString *)intentId;
-(void)setBackingStore:(id)arg1;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
-(void)setIdentifier:(id)arg1;
-(NSString *)identifier;

@end

