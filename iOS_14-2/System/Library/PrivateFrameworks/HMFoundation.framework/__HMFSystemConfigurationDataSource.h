/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
*/

#import <HMFoundation/HMFoundation-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <HMFoundation/HMFSystemInfoNameDataSource.h>

@protocol HMFSystemInfoNameDataSourceDelegate, OS_dispatch_queue;
@class NSString, NSObject;

@interface __HMFSystemConfigurationDataSource : HMFObject <HMFSystemInfoNameDataSource> {

	os_unfair_lock_s _lock;
	id<HMFSystemInfoNameDataSourceDelegate> _delegate;
	NSString* _name;
	NSObject*<OS_dispatch_queue> _queue;
	SCDynamicStoreRef _store;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) SCDynamicStoreRef store;                           //@synthesize store=_store - In the implementation block
@property (__weak) id<HMFSystemInfoNameDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                              //@synthesize name=_name - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(SCDynamicStoreRef)store;
-(id<HMFSystemInfoNameDataSourceDelegate>)delegate;
-(NSString *)name;
-(void)setDelegate:(id<HMFSystemInfoNameDataSourceDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)dealloc;
@end

