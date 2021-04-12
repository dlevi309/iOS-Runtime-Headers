/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <UIKitCore/UICollectionReusableView.h>

@protocol TUICandidateViewStyle;
@interface TUICandidateLine : UICollectionReusableView {

	id<TUICandidateViewStyle> _style;

}

@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
+(id)reuseIdentifier;
-(id<TUICandidateViewStyle>)style;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
@end

