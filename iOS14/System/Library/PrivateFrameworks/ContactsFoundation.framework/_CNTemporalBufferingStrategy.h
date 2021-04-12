/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/_CNBufferingStrategy.h>

@protocol CNScheduler, CNCancelable;
@class NSString;

@interface _CNTemporalBufferingStrategy : NSObject <_CNBufferingStrategy> {

	double _interval;
	id<CNScheduler> _scheduler;
	id<CNCancelable> _sendToken;

}

@property (retain) id<CNCancelable> sendToken;                      //@synthesize sendToken=_sendToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<CNCancelable>)sendToken;
-(void)setSendToken:(id<CNCancelable>)arg1 ;
-(void)buffer:(id)arg1 didReceiveResults:(id)arg2 forObserver:(id)arg3 ;
-(void)bufferDidSendResults:(id)arg1 ;
-(id)initWithTimeInterval:(double)arg1 scheduler:(id)arg2 ;
@end

