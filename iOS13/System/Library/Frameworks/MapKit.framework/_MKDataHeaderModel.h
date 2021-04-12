/*
* Generated on Monday, March 1, 2021 at 2:31:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class UIView, _MKLineHeaderModel, MKTransitInfoLabelView;

@interface _MKDataHeaderModel : NSObject {

	UIView* _ownerView;
	_MKLineHeaderModel* _firstLine;
	_MKLineHeaderModel* _secondLine;
	_MKLineHeaderModel* _thirdLine;
	_MKLineHeaderModel* _forthLine;
	MKTransitInfoLabelView* _transitLabel;
	_MKLineHeaderModel* _secondaryNameLine;

}

@property (assign,nonatomic,__weak) UIView * ownerView;                           //@synthesize ownerView=_ownerView - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * firstLine;                      //@synthesize firstLine=_firstLine - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * secondLine;                     //@synthesize secondLine=_secondLine - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * thirdLine;                      //@synthesize thirdLine=_thirdLine - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * forthLine;                      //@synthesize forthLine=_forthLine - In the implementation block
@property (nonatomic,retain) MKTransitInfoLabelView * transitLabel;               //@synthesize transitLabel=_transitLabel - In the implementation block
@property (nonatomic,retain) _MKLineHeaderModel * secondaryNameLine;              //@synthesize secondaryNameLine=_secondaryNameLine - In the implementation block
-(id)init;
-(id)description;
-(_MKLineHeaderModel *)firstLine;
-(void)setOwnerView:(UIView *)arg1 ;
-(MKTransitInfoLabelView *)transitLabel;
-(void)setTransitLabel:(MKTransitInfoLabelView *)arg1 ;
-(_MKLineHeaderModel *)secondLine;
-(_MKLineHeaderModel *)secondaryNameLine;
-(_MKLineHeaderModel *)thirdLine;
-(_MKLineHeaderModel *)forthLine;
-(UIView *)ownerView;
-(void)setFirstLine:(_MKLineHeaderModel *)arg1 ;
-(void)setSecondLine:(_MKLineHeaderModel *)arg1 ;
-(void)setThirdLine:(_MKLineHeaderModel *)arg1 ;
-(void)setForthLine:(_MKLineHeaderModel *)arg1 ;
-(void)setSecondaryNameLine:(_MKLineHeaderModel *)arg1 ;
@end

