/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
*/

#import <libobjc.A.dylib/SUInvalidatable.h>

@class SUInstallationConstraintObserver, NSString;

@interface _SUInstallationConstraintBlockObserverToken : NSObject <SUInvalidatable> {

	SUInstallationConstraintObserver* _observer;
	BOOL _invalidated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithObserver:(id)arg1 ;
-(void)invalidate;
-(void)dealloc;
@end

