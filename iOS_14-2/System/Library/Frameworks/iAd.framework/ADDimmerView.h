/*
* Generated on Thursday, January 14, 2021 at 2:25:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ADTapGestureRecognizer *)gestureRecognizer;
-(BOOL)dimmed;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)addADTapGestureRecognizer;
-(id<ADDimmerViewDelegate>)delegate;
-(void)removeADTapGestureRecognizer;
-(void)setDelegate:(id<ADDimmerViewDelegate>)arg1 ;
-(void)setGestureRecognizer:(ADTapGestureRecognizer *)arg1 ;
-(void)_tapRecognized:(id)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
@end

