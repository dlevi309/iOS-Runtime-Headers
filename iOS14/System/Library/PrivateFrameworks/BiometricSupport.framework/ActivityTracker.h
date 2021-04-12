/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)activityUpdateBlock;
-(id)initWithDescription:(id)arg1 ;
-(void)setActivityUpdateBlock:(id)arg1 ;
@end

