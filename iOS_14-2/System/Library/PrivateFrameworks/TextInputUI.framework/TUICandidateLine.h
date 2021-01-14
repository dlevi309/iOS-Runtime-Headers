/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/

#import <UIKitCore/UICollectionReusableView.h>

@protocol TUICandidateViewStyle;
@interface TUICandidateLine : UICollectionReusableView {

	id<TUICandidateViewStyle> _style;

}

@property (nonatomic,retain) id<TUICandidateViewStyle> style;              //@synthesize style=_style - In the implementation block
+(id)reuseIdentifier;
-(void)setStyle:(id<TUICandidateViewStyle>)arg1 ;
-(id<TUICandidateViewStyle>)style;
@end

