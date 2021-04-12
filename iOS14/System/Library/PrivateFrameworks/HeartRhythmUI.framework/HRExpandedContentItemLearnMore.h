/*
* Generated on Thursday, January 14, 2021 at 2:27:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HeartRhythmUI.framework/HeartRhythmUI
*/


@protocol HRLinkTextViewDelegate;
@interface HRExpandedContentItemLearnMore : NSObject {

	long long _urlIdentifier;
	id<HRLinkTextViewDelegate> _delegate;

}

@property (assign,nonatomic) long long urlIdentifier;                                 //@synthesize urlIdentifier=_urlIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<HRLinkTextViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HRLinkTextViewDelegate>)delegate;
-(void)setDelegate:(id<HRLinkTextViewDelegate>)arg1 ;
-(id)initWithURLIdentifier:(long long)arg1 delegate:(id)arg2 ;
-(long long)urlIdentifier;
-(void)setUrlIdentifier:(long long)arg1 ;
@end

