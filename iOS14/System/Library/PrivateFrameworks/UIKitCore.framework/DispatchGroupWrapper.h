/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface DispatchGroupWrapper : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(id)init;
-(void)executeWithDispatchGroup:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)notify:(/*^block*/id)arg1 ;
@end

