/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUIDynamic.framework/AppleMediaServicesUIDynamic
*/


@class NSBundle;

@interface AMSUIDCellularDataInquiry : NSObject {

	NSBundle* _bundle;

}

@property (nonatomic,readonly) NSBundle * bundle;                    //@synthesize bundle=_bundle - In the implementation block
@property (nonatomic,readonly) BOOL isSupported; 
@property (nonatomic,readonly) BOOL isEnabledForDevice; 
@property (nonatomic,readonly) BOOL isEnabledForBundle; 
+(id)settingsURL;
-(NSBundle *)bundle;
-(BOOL)isSupported;
-(id)initWithBundle:(id)arg1 ;
-(id)init;
-(BOOL)isEnabledForDevice;
-(BOOL)isEnabledForBundle;
@end

