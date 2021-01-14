/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@interface CNContactHeaderViewSizeAttributes : NSObject {

	double _photoMinHeight;
	double _photoMinTopMargin;
	double _photoMinBottomMargin;
	double _minNavbarTitleOffset;
	double _maxNavbarTitleOffset;
	double __minHeight;
	double __maxHeight;
	double _photoMaxHeight;
	double _photoMaxTopMargin;
	double _photoMaxBottomMargin;

}

@property (assign,nonatomic) double _minHeight;                        //@synthesize _minHeight=__minHeight - In the implementation block
@property (assign,nonatomic) double _maxHeight;                        //@synthesize _maxHeight=__maxHeight - In the implementation block
@property (assign,nonatomic) double photoMinHeight;                    //@synthesize photoMinHeight=_photoMinHeight - In the implementation block
@property (assign,nonatomic) double photoMaxHeight;                    //@synthesize photoMaxHeight=_photoMaxHeight - In the implementation block
@property (assign,nonatomic) double photoMinTopMargin;                 //@synthesize photoMinTopMargin=_photoMinTopMargin - In the implementation block
@property (assign,nonatomic) double photoMaxTopMargin;                 //@synthesize photoMaxTopMargin=_photoMaxTopMargin - In the implementation block
@property (assign,nonatomic) double photoMinBottomMargin;              //@synthesize photoMinBottomMargin=_photoMinBottomMargin - In the implementation block
@property (assign,nonatomic) double photoMaxBottomMargin;              //@synthesize photoMaxBottomMargin=_photoMaxBottomMargin - In the implementation block
@property (assign,nonatomic) double minNavbarTitleOffset;              //@synthesize minNavbarTitleOffset=_minNavbarTitleOffset - In the implementation block
@property (assign,nonatomic) double maxNavbarTitleOffset;              //@synthesize maxNavbarTitleOffset=_maxNavbarTitleOffset - In the implementation block
+(id)defaultAttributes;
+(id)displayAttributes;
+(id)editingAttributes;
+(id)editingAttributesWithNavBar;
+(id)displayAttributesWithNavBar;
-(id)init;
-(double)minHeight;
-(double)_minHeight;
-(double)_maxHeight;
-(double)maxHeight;
-(double)photoMinHeight;
-(double)valueBetweenMin:(double)arg1 max:(double)arg2 percentMax:(double)arg3 ;
-(double)photoHeightWithPercentMax:(double)arg1 ;
-(double)photoMinTopMargin;
-(double)photoTopMarginWithPercentMax:(double)arg1 ;
-(double)photoBottomMarginWithPercentMax:(double)arg1 ;
-(void)setPhotoMinHeight:(double)arg1 ;
-(double)navbarTitleOffsetWithPercentMax:(double)arg1 ;
-(void)setPhotoMinTopMargin:(double)arg1 ;
-(double)photoMinBottomMargin;
-(void)setPhotoMinBottomMargin:(double)arg1 ;
-(double)minNavbarTitleOffset;
-(void)setMinNavbarTitleOffset:(double)arg1 ;
-(double)maxNavbarTitleOffset;
-(void)setMaxNavbarTitleOffset:(double)arg1 ;
-(void)set_minHeight:(double)arg1 ;
-(void)set_maxHeight:(double)arg1 ;
-(double)photoMaxHeight;
-(void)setPhotoMaxHeight:(double)arg1 ;
-(double)photoMaxTopMargin;
-(void)setPhotoMaxTopMargin:(double)arg1 ;
-(double)photoMaxBottomMargin;
-(void)setPhotoMaxBottomMargin:(double)arg1 ;
@end

