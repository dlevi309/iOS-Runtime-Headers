/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreCDP.framework/CoreCDP
*/

#import <libobjc.A.dylib/CDPDAuthListener.h>
#import <libobjc.A.dylib/CDPDCircleListener.h>

@protocol CDPDCircleProxy;
@class NSString;

@interface CDPManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener> {

	id<CDPDCircleProxy> _circleProxy;

}

@property (nonatomic,retain) id<CDPDCircleProxy> circleProxy;              //@synthesize circleProxy=_circleProxy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(BOOL)isPrimaryAccountHSA2;
-(BOOL)_checkSecurityEligibility:(id*)arg1 ;
-(void)_didCreateCircleProxy;
-(void)reportManateeAvailable;
-(void)reportManateeUnavailable;
-(void)_sendNotification:(const char*)arg1 withValue:(unsigned long long)arg2 ;
-(void)securityLevelChanged:(BOOL)arg1 ;
-(void)circleStatusChanged;
-(void)circleViewStatusChanged;
-(id<CDPDCircleProxy>)circleProxy;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
@end

