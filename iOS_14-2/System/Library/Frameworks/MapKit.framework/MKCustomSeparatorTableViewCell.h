/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKTableViewCell.h>

@interface MKCustomSeparatorTableViewCell : MKTableViewCell {

	double _leftSeparatorInset;
	double _rightSeparatorInset;

}

@property (assign,getter=isSeparatorHidden,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) double leftSeparatorInset;                                  //@synthesize leftSeparatorInset=_leftSeparatorInset - In the implementation block
@property (assign,nonatomic) double rightSeparatorInset;                                 //@synthesize rightSeparatorInset=_rightSeparatorInset - In the implementation block
@property (assign,nonatomic) double leadingSeparatorInset; 
@property (assign,nonatomic) double trailingSeparatorInset; 
-(CGRect)_separatorFrame;
-(double)leftSeparatorInset;
-(void)_updateSeparatorInset;
-(double)rightSeparatorInset;
-(void)setRightSeparatorInset:(double)arg1 ;
-(void)setLeftSeparatorInset:(double)arg1 ;
-(double)leadingSeparatorInset;
-(double)trailingSeparatorInset;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)setTrailingSeparatorInset:(double)arg1 ;
-(BOOL)isSeparatorHidden;
@end

