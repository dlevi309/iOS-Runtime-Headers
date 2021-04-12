/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)invalidate;
-(long long)state;
-(void)setDidDismissHandler:(id)arg1 ;
-(id)didDismissHandler;
-(void)didPresent;
-(void)willPresent;
-(void)willDismiss;
-(void)didDismiss;
-(id)willPresentHandler;
-(void)setWillPresentHandler:(id)arg1 ;
-(id)didPresentHandler;
-(void)setDidPresentHandler:(id)arg1 ;
-(id)willDismissHandler;
-(void)setWillDismissHandler:(id)arg1 ;
@end

