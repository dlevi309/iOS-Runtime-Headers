/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)subregisterWithHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)removeInvalidatedSubregistration:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(BOOL)hasSubregistrations;
-(void)invalidate;
-(void)dealloc;
@end

