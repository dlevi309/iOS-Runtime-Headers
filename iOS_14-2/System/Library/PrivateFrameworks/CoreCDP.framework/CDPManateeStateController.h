/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id<CDPDCircleProxy>)circleProxy;
-(void)circleStatusChanged;
-(BOOL)isManateeAvailable:(id*)arg1 ;
-(void)securityLevelChanged:(BOOL)arg1 ;
-(BOOL)isPrimaryAccountHSA2;
-(BOOL)_checkSecurityEligibility:(id*)arg1 ;
-(void)setCircleProxy:(id<CDPDCircleProxy>)arg1 ;
-(void)reportManateeAvailable;
-(void)_didCreateCircleProxy;
-(void)_sendNotification:(const char*)arg1 withValue:(unsigned long long)arg2 ;
-(void)reportManateeUnavailable;
-(void)circleViewStatusChanged;
@end

