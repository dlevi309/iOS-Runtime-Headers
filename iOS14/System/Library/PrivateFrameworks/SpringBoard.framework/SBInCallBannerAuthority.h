/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BNConsidering.h>

@protocol BNConsideringDelegate;
@class NSString;

@interface SBInCallBannerAuthority : NSObject <BNConsidering> {

	id<BNConsideringDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<BNConsideringDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<BNConsideringDelegate>)delegate;
-(void)setDelegate:(id<BNConsideringDelegate>)arg1 ;
-(long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2 ;
-(long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3 ;
-(void)mayChangeDecisionForResponsiblePresentable:(id)arg1 ;
@end

