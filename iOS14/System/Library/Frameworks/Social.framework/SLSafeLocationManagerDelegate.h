/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol CLLocationManagerDelegate;
@class NSString;

@interface SLSafeLocationManagerDelegate : NSObject <CLLocationManagerDelegate> {

	id<CLLocationManagerDelegate> _delegate;

}

@property (__weak) id<CLLocationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id<CLLocationManagerDelegate>)delegate;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)setDelegate:(id<CLLocationManagerDelegate>)arg1 ;
@end

