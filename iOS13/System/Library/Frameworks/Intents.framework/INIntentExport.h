/*
* Generated on Monday, March 1, 2021 at 2:31:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(id)arg1;
-(PBCodable *)backingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2;
-(NSString *)launchId;
-(NSString *)intentId;
-(NSString *)typeName;
-(void)trimDataAgainstTCCForAuditToken:(SCD_Struct_IN2)arg1 bundle:(id)arg2;
-(void)setBackingStore:(id)arg1;
-(NSString *)utteranceString;

@end

