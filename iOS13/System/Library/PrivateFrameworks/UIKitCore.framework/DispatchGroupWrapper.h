/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_group;
@class NSObject;

@interface DispatchGroupWrapper : NSObject {

	NSObject*<OS_dispatch_group> _dispatchGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> dispatchGroup;              //@synthesize dispatchGroup=_dispatchGroup - In the implementation block
-(id)init;
-(void)dealloc;
-(void)executeWithDispatchGroup:(/*^block*/id)arg1 ;
-(void)notify:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_group>)dispatchGroup;
-(void)setDispatchGroup:(NSObject*<OS_dispatch_group>)arg1 ;
@end

