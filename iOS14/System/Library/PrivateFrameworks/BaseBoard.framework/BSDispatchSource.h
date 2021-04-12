/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
*/

#import <BaseBoard/BaseBoard-Structs.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol OS_dispatch_source;
@class NSObject, NSString;

@interface BSDispatchSource : NSObject <BSInvalidatable> {

	dispatch_source_type_sRef _type;
	NSObject*<OS_dispatch_source> _source;
	int _activated;
	int _invalidated;
	/*^block*/id _eventHandler;
	/*^block*/id _cancelHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
@end

