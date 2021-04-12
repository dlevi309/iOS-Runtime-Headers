/*
* Generated on Monday, March 1, 2021 at 2:35:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MDM.framework/MDM
*/

#import <libobjc.A.dylib/SSRequestDelegate.h>

@class SSRequest, NSTimer, NSString;

@interface MCSSRequestDelegate : NSObject <SSRequestDelegate> {

	SSRequest* _request;
	/*^block*/id _completionBlock;
	NSTimer* _timeoutTimer;

}

@property (nonatomic,retain,readonly) SSRequest * request;              //@synthesize request=_request - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)cancel;
-(SSRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)_startTimeout:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

