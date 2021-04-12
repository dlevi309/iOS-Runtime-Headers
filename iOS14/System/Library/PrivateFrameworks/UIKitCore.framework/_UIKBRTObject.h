/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject;

@interface _UIKBRTObject : NSObject {

	NSMutableArray* _owner;
	NSObject*<OS_dispatch_queue> _syncQueue;

}
-(id)owner;
-(id)nextEntry;
-(void)setOwner:(id)arg1 ;
-(id)previousEntry;
@end

