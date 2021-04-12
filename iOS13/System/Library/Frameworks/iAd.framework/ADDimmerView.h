/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
*/

#import <iAd/iAd-Structs.h>
#import <UIKitCore/UIView.h>

@protocol ADDimmerViewDelegate;
@class ADTapGestureRecognizer;

@interface ADDimmerView : UIView {

	BOOL _dimmed;
	id<ADDimmerViewDelegate> _delegate;
	ADTapGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,retain) ADTapGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                             //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) BOOL enabled; 
@property (assign,nonatomic,__weak) id<ADDimmerViewDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
-(BOOL)enabled;
-(id<ADDimmerViewDelegate>)delegate;
-(void)setDelegate:(id<ADDimmerViewDelegate>)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setGestureRecognizer:(ADTapGestureRecognizer *)arg1 ;
-(ADTapGestureRecognizer *)gestureRecognizer;
-(void)_tapRecognized:(id)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
-(void)removeADTapGestureRecognizer;
-(void)addADTapGestureRecognizer;
@end

