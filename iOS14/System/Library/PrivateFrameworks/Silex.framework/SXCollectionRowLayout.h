/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLeftMargin:(double)arg1 ;
-(double)leftMargin;
-(id)description;
-(void)setRightMargin:(double)arg1 ;
-(double)rightMargin;
-(unsigned long long)componentsPerRow;
-(double)componentWidth;
-(double)spaceBetweenComponents;
-(unsigned long long)intendedComponentsPerRow;
-(void)setIntendedComponentsPerRow:(unsigned long long)arg1 ;
-(void)setComponentsPerRow:(unsigned long long)arg1 ;
-(void)setComponentWidth:(double)arg1 ;
-(void)setSpaceBetweenComponents:(double)arg1 ;
@end

