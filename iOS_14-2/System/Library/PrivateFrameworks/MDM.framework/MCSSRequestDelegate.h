/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(SSRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)requestDidFinish:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)cancel;
-(void)_timerDidFire:(id)arg1 ;
-(void)dealloc;
-(void)_startTimeout:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

