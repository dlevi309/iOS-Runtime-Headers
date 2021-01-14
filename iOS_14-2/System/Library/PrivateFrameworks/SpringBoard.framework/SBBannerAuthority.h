/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/BNConsideringDelegate.h>
#import <libobjc.A.dylib/BNConsidering.h>

@protocol BNConsideringDelegate;
@class NSMutableDictionary, NSString;

@interface SBBannerAuthority : NSObject <BNConsideringDelegate, BNConsidering> {

	NSMutableDictionary* _requesterIDsToAuthorities;
	id<BNConsideringDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<BNConsideringDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<BNConsideringDelegate>)delegate;
-(void)setDelegate:(id<BNConsideringDelegate>)arg1 ;
-(void)registerAuthority:(id)arg1 forRequesterIdentifier:(id)arg2 ;
-(void)bannerAuthority:(id)arg1 mayChangeDecisionForResponsiblePresentable:(id)arg2 ;
-(long long)shouldOverlapPresentable:(id)arg1 withPresentable:(id)arg2 ;
-(long long)shouldPresentPresentable:(id)arg1 withPresentedPresentables:(id)arg2 responsiblePresentable:(out id*)arg3 ;
-(long long)_mediatedDecisionFromDecisions:(id)arg1 defaultDecision:(long long)arg2 ;
@end

