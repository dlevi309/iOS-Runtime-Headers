/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriActivation.framework/SiriActivation
*/

#import <SiriActivation/SiriActivationSource.h>

@protocol SiriDirectActionSourceDelegate;
@interface SiriDirectActionSource : SiriActivationSource {

	id<SiriDirectActionSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriDirectActionSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)configureConnection;
-(id)init;
-(id<SiriDirectActionSourceDelegate>)delegate;
-(void)setDelegate:(id<SiriDirectActionSourceDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)activateWithContext:(id)arg1 ;
-(void)activateWithContext:(id)arg1 completion:(/*^block*/id)arg2 ;
-(oneway void)canActivateChangedTo:(id)arg1 ;
@end

