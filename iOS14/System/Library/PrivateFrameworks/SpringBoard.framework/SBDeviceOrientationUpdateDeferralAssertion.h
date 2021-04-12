/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString, SBDeviceOrientationUpdateManager;

@interface SBDeviceOrientationUpdateDeferralAssertion : NSObject <BSInvalidatable> {

	BOOL _invalidated;
	NSString* _reason;
	SBDeviceOrientationUpdateManager* _hackyBackReference;

}

@property (assign,setter=_setHackyBackReference:,nonatomic,__weak) SBDeviceOrientationUpdateManager * hackyBackReference;              //@synthesize hackyBackReference=_hackyBackReference - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated;                                                                  //@synthesize invalidated=_invalidated - In the implementation block
@property (nonatomic,copy,readonly) NSString * reason;                                                                                 //@synthesize reason=_reason - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isInvalidated;
-(id)init;
-(id)initWithReason:(id)arg1 ;
-(NSString *)description;
-(void)_setHackyBackReference:(id)arg1 ;
-(NSString *)reason;
-(void)invalidate;
-(SBDeviceOrientationUpdateManager *)hackyBackReference;
-(void)dealloc;
@end

