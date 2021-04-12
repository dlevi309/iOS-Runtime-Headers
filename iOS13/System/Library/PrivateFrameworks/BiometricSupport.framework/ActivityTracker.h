/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@protocol OS_os_transaction;
@class NSString, NSObject;

@interface ActivityTracker : NSObject {

	NSString* _description;
	NSObject*<OS_os_transaction> _transaction;
	/*^block*/id _activityUpdateBlock;

}

@property (copy) id activityUpdateBlock;              //@synthesize activityUpdateBlock=_activityUpdateBlock - In the implementation block
-(void)setActive:(BOOL)arg1 ;
-(id)initWithDescription:(id)arg1 ;
-(id)activityUpdateBlock;
-(void)setActivityUpdateBlock:(id)arg1 ;
@end

