/*
* Generated on Thursday, January 14, 2021 at 2:22:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
*/


@protocol OS_dispatch_queue;
@class BKSTerminationAssertion, NSObject, NSString;

@interface FBSApplicationTerminationAssertion : NSObject {

	BKSTerminationAssertion* _assertion;
	NSObject*<OS_dispatch_queue> _queue;
	NSString* _bundleID;
	NSString* _reason;
	long long _assertionState;

}

@property (nonatomic,copy,readonly) NSString * bundleID; 
@property (nonatomic,copy,readonly) NSString * reason; 
@property (nonatomic,readonly) long long assertionState; 
+(id)_queue;
-(id)description;
-(NSString *)reason;
-(NSString *)bundleID;
-(long long)assertionState;
-(id)initWithBundleID:(id)arg1 reason:(id)arg2 acquisitionHandler:(/*^block*/id)arg3 ;
-(void)invalidate;
-(void)dealloc;
@end

