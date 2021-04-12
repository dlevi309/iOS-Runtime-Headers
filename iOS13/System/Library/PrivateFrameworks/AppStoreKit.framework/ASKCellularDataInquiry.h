/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreKit.framework/AppStoreKit
*/


@class NSBundle;

@interface ASKCellularDataInquiry : NSObject {

	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) BOOL isSupported; 
@property (nonatomic,readonly) BOOL isEnabledForDevice; 
@property (nonatomic,readonly) BOOL isEnabledForBundle; 
+(id)settingsURL;
-(id)init;
-(id)initWithBundle:(id)arg1 ;
-(NSBundle *)bundle;
-(BOOL)isSupported;
-(BOOL)isEnabledForDevice;
-(BOOL)isEnabledForBundle;
@end

