/*
* Generated on Thursday, January 14, 2021 at 2:25:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BSInvalidatable.h>

@class NSString;

@interface SBPresentationObservationToken : NSObject <BSInvalidatable> {

	long long _state;
	/*^block*/id _willPresentHandler;
	/*^block*/id _didPresentHandler;
	/*^block*/id _willDismissHandler;
	/*^block*/id _didDismissHandler;

}

@property (nonatomic,readonly) long long state;                     //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id willPresentHandler;                   //@synthesize willPresentHandler=_willPresentHandler - In the implementation block
@property (nonatomic,copy) id didPresentHandler;                    //@synthesize didPresentHandler=_didPresentHandler - In the implementation block
@property (nonatomic,copy) id willDismissHandler;                   //@synthesize willDismissHandler=_willDismissHandler - In the implementation block
@property (nonatomic,copy) id didDismissHandler;                    //@synthesize didDismissHandler=_didDismissHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didPresent;
-(void)didDismiss;
-(id)didDismissHandler;
-(void)setDidDismissHandler:(id)arg1 ;
-(long long)state;
-(void)invalidate;
-(void)willPresent;
-(void)willDismiss;
-(id)willPresentHandler;
-(void)setWillPresentHandler:(id)arg1 ;
-(id)didPresentHandler;
-(void)setDidPresentHandler:(id)arg1 ;
-(id)willDismissHandler;
-(void)setWillDismissHandler:(id)arg1 ;
@end

