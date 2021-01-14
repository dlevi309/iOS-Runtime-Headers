/*
* Generated on Thursday, January 14, 2021 at 2:20:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface UISlidingBarStateRequest : NSObject <NSCopying> {

	BOOL _userInitiated;
	double _leadingWidth;
	double _leadingOffscreenWidth;
	double _trailingWidth;
	double _trailingOffscreenWidth;
	double _supplementaryWidth;
	double _supplementaryOffscreenWidth;
	double _rubberBandInset;
	long long _mainPositioning;
	double _detachedMainXOffset;
	double _mainWidth;

}

@property (assign,nonatomic) BOOL userInitiated;                              //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic) double leadingWidth;                             //@synthesize leadingWidth=_leadingWidth - In the implementation block
@property (assign,nonatomic) double leadingOffscreenWidth;                    //@synthesize leadingOffscreenWidth=_leadingOffscreenWidth - In the implementation block
@property (assign,nonatomic) double trailingWidth;                            //@synthesize trailingWidth=_trailingWidth - In the implementation block
@property (assign,nonatomic) double trailingOffscreenWidth;                   //@synthesize trailingOffscreenWidth=_trailingOffscreenWidth - In the implementation block
@property (assign,nonatomic) double supplementaryWidth;                       //@synthesize supplementaryWidth=_supplementaryWidth - In the implementation block
@property (assign,nonatomic) double supplementaryOffscreenWidth;              //@synthesize supplementaryOffscreenWidth=_supplementaryOffscreenWidth - In the implementation block
@property (assign,nonatomic) double rubberBandInset;                          //@synthesize rubberBandInset=_rubberBandInset - In the implementation block
@property (assign,nonatomic) long long mainPositioning;                       //@synthesize mainPositioning=_mainPositioning - In the implementation block
@property (assign,nonatomic) double detachedMainXOffset;                      //@synthesize detachedMainXOffset=_detachedMainXOffset - In the implementation block
@property (assign,nonatomic) double mainWidth;                                //@synthesize mainWidth=_mainWidth - In the implementation block
-(void)setLeadingWidth:(double)arg1 ;
-(double)rubberBandInset;
-(void)setTrailingOffscreenWidth:(double)arg1 ;
-(id)init;
-(id)_matchingState:(id)arg1 ;
-(void)setMainWidth:(double)arg1 ;
-(void)setLeadingOffscreenWidth:(double)arg1 ;
-(id)_closestEqualOrLargerState:(id)arg1 returningDistance:(double*)arg2 ;
-(long long)mainPositioning;
-(void)setSupplementaryOffscreenWidth:(double)arg1 ;
-(double)supplementaryWidth;
-(double)trailingOffscreenWidth;
-(void)setDetachedMainXOffset:(double)arg1 ;
-(void)setTrailingWidth:(double)arg1 ;
-(id)_closestState:(id)arg1 ;
-(id)description;
-(void)setMainPositioning:(long long)arg1 ;
-(double)leadingWidth;
-(double)trailingWidth;
-(double)leadingOffscreenWidth;
-(double)supplementaryOffscreenWidth;
-(double)mainWidth;
-(void)setRubberBandInset:(double)arg1 ;
-(id)_closestState:(id)arg1 returningDistance:(double*)arg2 ;
-(unsigned long long)hash;
-(void)setUserInitiated:(BOOL)arg1 ;
-(double)detachedMainXOffset;
-(BOOL)userInitiated;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSupplementaryWidth:(double)arg1 ;
-(id)_closestEqualOrLargerState:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

