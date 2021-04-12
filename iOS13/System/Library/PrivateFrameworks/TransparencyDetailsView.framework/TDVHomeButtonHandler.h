/*
* Generated on Monday, March 1, 2021 at 2:35:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TransparencyDetailsView.framework/TransparencyDetailsView
*/

#import <libobjc.A.dylib/SBSHardwareButtonEventConsuming.h>

@protocol BSInvalidatable;
@class NSString;

@interface TDVHomeButtonHandler : NSObject <SBSHardwareButtonEventConsuming> {

	/*^block*/id _homeButtonHandlerCallback;
	id<BSInvalidatable> _homeButtonAssertion;

}

@property (nonatomic,retain) id<BSInvalidatable> homeButtonAssertion;              //@synthesize homeButtonAssertion=_homeButtonAssertion - In the implementation block
@property (nonatomic,copy) id homeButtonHandlerCallback;                           //@synthesize homeButtonHandlerCallback=_homeButtonHandlerCallback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)handlerWithCompletion:(/*^block*/id)arg1 ;
-(void)consumeSinglePressUpForButtonKind:(long long)arg1 ;
-(id)initWithCompletion:(/*^block*/id)arg1 ;
-(void)stopConsumingHardwarePresses;
-(void)startConsumingHardwarePresses:(/*^block*/id)arg1 ;
-(void)setHomeButtonHandlerCallback:(id)arg1 ;
-(id<BSInvalidatable>)homeButtonAssertion;
-(void)setHomeButtonAssertion:(id<BSInvalidatable>)arg1 ;
-(id)homeButtonHandlerCallback;
@end

