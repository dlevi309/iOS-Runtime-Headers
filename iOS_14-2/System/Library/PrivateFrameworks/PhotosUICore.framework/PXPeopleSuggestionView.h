/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSmartScaleView.h>

@protocol PXPerson;
@class UIImageView, UIView, CAShapeLayer, PXPersonImageRequest, NSDateFormatter, UILabel;

@interface PXPeopleSuggestionView : PXSmartScaleView {

	BOOL _needsSpotlightUpdate;
	BOOL _validSpotlight;
	id<PXPerson> _suggestion;
	UIImageView* _imageView;
	UIView* _suggestionView;
	UIView* _dimView;
	CAShapeLayer* _spotlightLayer;
	PXPersonImageRequest* _imageRequest;
	NSDateFormatter* _dateFormatter;
	UILabel* _dateLabel;
	CGRect _faceRect;

}

@property (assign,nonatomic) CGRect faceRect;                                  //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                          //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * suggestionView;                          //@synthesize suggestionView=_suggestionView - In the implementation block
@property (nonatomic,retain) UIView * dimView;                                 //@synthesize dimView=_dimView - In the implementation block
@property (nonatomic,retain) CAShapeLayer * spotlightLayer;                    //@synthesize spotlightLayer=_spotlightLayer - In the implementation block
@property (assign,nonatomic) BOOL needsSpotlightUpdate;                        //@synthesize needsSpotlightUpdate=_needsSpotlightUpdate - In the implementation block
@property (assign,nonatomic) BOOL validSpotlight;                              //@synthesize validSpotlight=_validSpotlight - In the implementation block
@property (nonatomic,retain) PXPersonImageRequest * imageRequest;              //@synthesize imageRequest=_imageRequest - In the implementation block
@property (nonatomic,retain) NSDateFormatter * dateFormatter;                  //@synthesize dateFormatter=_dateFormatter - In the implementation block
@property (nonatomic,retain) UILabel * dateLabel;                              //@synthesize dateLabel=_dateLabel - In the implementation block
@property (nonatomic,readonly) id<PXPerson> suggestion;                        //@synthesize suggestion=_suggestion - In the implementation block
-(void)setImageView:(UIImageView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGRect)faceRect;
-(id)init;
-(UILabel *)dateLabel;
-(UIImageView *)imageView;
-(UIView *)dimView;
-(NSDateFormatter *)dateFormatter;
-(id<PXPerson>)suggestion;
-(void)viewScaleDidChange;
-(void)commonInit;
-(PXPersonImageRequest *)imageRequest;
-(double)_faceScale;
-(void)layoutSubviews;
-(UIView *)suggestionView;
-(void)setSuggestionView:(UIView *)arg1 ;
-(CGRect)_scaledFaceRect;
-(void)setSuggestion:(id)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_updateSuggestionImageWithAnimatedSpotlight:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_updateSpotlightAnimated:(BOOL)arg1 ;
-(void)_updateDateFieldWithSuggestion:(id)arg1 ;
-(void)setDimView:(UIView *)arg1 ;
-(CAShapeLayer *)spotlightLayer;
-(void)setSpotlightLayer:(CAShapeLayer *)arg1 ;
-(BOOL)validSpotlight;
-(BOOL)needsSpotlightUpdate;
-(void)setNeedsSpotlightUpdate:(BOOL)arg1 ;
-(void)setValidSpotlight:(BOOL)arg1 ;
-(void)setFaceRect:(CGRect)arg1 ;
-(void)setImageRequest:(PXPersonImageRequest *)arg1 ;
-(void)setDateFormatter:(NSDateFormatter *)arg1 ;
-(void)setDateLabel:(UILabel *)arg1 ;
@end

