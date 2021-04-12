/*
* Generated on Thursday, January 14, 2021 at 2:27:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/AppStoreComponents
*/


@class ASCLockup, NSString;

@interface ASCLockupProductDetails : NSObject {

	ASCLockup* _lockup;
	NSString* _storeSheetHostBundleID;
	NSString* _storeSheetUsageContext;

}

@property (nonatomic,copy,readonly) ASCLockup * lockup;                             //@synthesize lockup=_lockup - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeSheetHostBundleID;              //@synthesize storeSheetHostBundleID=_storeSheetHostBundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * storeSheetUsageContext;              //@synthesize storeSheetUsageContext=_storeSheetUsageContext - In the implementation block
+(id)URLForLockupID:(id)arg1 ofKind:(id)arg2 withOfferFlags:(long long)arg3 ;
-(ASCLockup *)lockup;
-(void)present;
-(id)description;
-(void)presentFromViewController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)storeSheetHostBundleID;
-(NSString *)storeSheetUsageContext;
-(id)initWithLockup:(id)arg1 storeSheetHostBundleID:(id)arg2 storeSheetUsageContext:(id)arg3 ;
@end

