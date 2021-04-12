/*
* Generated on Monday, March 1, 2021 at 2:30:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,copy) id eventHandler;                         //@synthesize eventHandler=_eventHandler - In the implementation block
@property (nonatomic,copy) id cancelHandler;                        //@synthesize cancelHandler=_cancelHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(void)resume;
-(id)initWithType:(dispatch_source_type_sRef)arg1 handle:(unsigned long long)arg2 mask:(unsigned long long)arg3 queue:(id)arg4 configureSourceBlock:(/*^block*/id)arg5 ;
-(id)eventHandler;
-(void)setEventHandler:(id)arg1 ;
-(id)cancelHandler;
-(void)setCancelHandler:(id)arg1 ;
@end

