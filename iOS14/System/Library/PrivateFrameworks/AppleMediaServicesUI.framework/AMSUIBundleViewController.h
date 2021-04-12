/*
* Generated on Thursday, January 14, 2021 at 2:24:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
*/

#import <AppleMediaServicesUI/AMSUIDynamicViewController.h>
#import <libobjc.A.dylib/AMSBagConsumer.h>

@class ACAccount, NSString;

@interface AMSUIBundleViewController : AMSUIDynamicViewController <AMSBagConsumer> {

	ACAccount* account;
	NSString* _placement;
	NSString* _serviceType;

}

@property (nonatomic,retain) NSString * placement;                  //@synthesize placement=_placement - In the implementation block
@property (nonatomic,retain) NSString * serviceType;                //@synthesize serviceType=_serviceType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bagKeySet;
+(id)bagSubProfile;
+(id)bagSubProfileVersion;
-(id)account;
-(NSString *)placement;
-(void)setAccount:(id)arg1 ;
-(void)setPlacement:(NSString *)arg1 ;
-(void)setServiceType:(NSString *)arg1 ;
-(NSString *)serviceType;
-(id)initWithServiceType:(id)arg1 placement:(id)arg2 account:(id)arg3 bag:(id)arg4 ;
@end

