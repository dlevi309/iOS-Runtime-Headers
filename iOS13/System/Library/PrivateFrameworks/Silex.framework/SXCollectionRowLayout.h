/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@interface SXCollectionRowLayout : NSObject {

	unsigned long long _intendedComponentsPerRow;
	unsigned long long _componentsPerRow;
	double _leftMargin;
	double _rightMargin;
	double _componentWidth;
	double _spaceBetweenComponents;

}

@property (assign,nonatomic) unsigned long long intendedComponentsPerRow;              //@synthesize intendedComponentsPerRow=_intendedComponentsPerRow - In the implementation block
@property (assign,nonatomic) unsigned long long componentsPerRow;                      //@synthesize componentsPerRow=_componentsPerRow - In the implementation block
@property (assign,nonatomic) double leftMargin;                                        //@synthesize leftMargin=_leftMargin - In the implementation block
@property (assign,nonatomic) double rightMargin;                                       //@synthesize rightMargin=_rightMargin - In the implementation block
@property (assign,nonatomic) double componentWidth;                                    //@synthesize componentWidth=_componentWidth - In the implementation block
@property (assign,nonatomic) double spaceBetweenComponents;                            //@synthesize spaceBetweenComponents=_spaceBetweenComponents - In the implementation block
-(id)description;
-(void)setLeftMargin:(double)arg1 ;
-(void)setRightMargin:(double)arg1 ;
-(double)rightMargin;
-(unsigned long long)componentsPerRow;
-(double)componentWidth;
-(double)spaceBetweenComponents;
-(double)leftMargin;
-(unsigned long long)intendedComponentsPerRow;
-(void)setIntendedComponentsPerRow:(unsigned long long)arg1 ;
-(void)setComponentsPerRow:(unsigned long long)arg1 ;
-(void)setComponentWidth:(double)arg1 ;
-(void)setSpaceBetweenComponents:(double)arg1 ;
@end

