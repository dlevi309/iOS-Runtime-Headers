/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol OS_dispatch_queue;
#import <PassKitCore/PassKitCore-Structs.h>
@class NSObject, NSMutableArray, NSString;

@interface PKNotifyRegistration : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	os_unfair_lock_s _lock;
	int _token;
	NSMutableArray* _subregistrations;
	BOOL _invalidated;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)name;
-(void)invalidate;
-(id)initWithName:(id)arg1 ;
-(void)removeInvalidatedSubregistration:(id)arg1 ;
-(id)subregisterWithHandler:(/*^block*/id)arg1 ;
-(BOOL)hasSubregistrations;
@end

