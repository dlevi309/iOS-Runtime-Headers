/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(CGRect)_separatorFrame;
-(void)setSeparatorHidden:(BOOL)arg1 ;
-(void)setLeadingSeparatorInset:(double)arg1 ;
-(void)setTrailingSeparatorInset:(double)arg1 ;
-(BOOL)isSeparatorHidden;
-(void)_updateSeparatorInset;
-(double)leftSeparatorInset;
-(double)rightSeparatorInset;
-(void)setRightSeparatorInset:(double)arg1 ;
-(void)setLeftSeparatorInset:(double)arg1 ;
-(double)leadingSeparatorInset;
-(double)trailingSeparatorInset;
@end

