/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivationSource.h>

@protocol SiriDirectActionSourceDelegate;
@interface SiriDirectActionSource : SiriActivationSource {

	id<SiriDirectActionSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriDirectActionSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<SiriDirectActionSourceDelegate>)delegate;
-(void)setDelegate:(id<SiriDirectActionSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)activateWithContext:(id)arg1 ;
-(void)configureConnection;
-(oneway void)canActivateChangedTo:(id)arg1 ;
-(void)activateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

