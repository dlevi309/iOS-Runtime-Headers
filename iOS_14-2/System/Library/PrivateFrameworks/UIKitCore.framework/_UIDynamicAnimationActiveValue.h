/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@interface _UIDynamicAnimationActiveValue : NSObject {

	double _value;
	double _minimumActiveValue;
	double _maximumActiveValue;
	int _type;
	double _boundaryPull;
	id _applier;
	unsigned _lowerBoundary : 1;
	unsigned _upperBoundary : 1;

}

@property (assign,nonatomic) double value;                           //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumActiveValue;              //@synthesize minimumActiveValue=_minimumActiveValue - In the implementation block
@property (assign,nonatomic) double maximumActiveValue;              //@synthesize maximumActiveValue=_maximumActiveValue - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
+(id)lowerBoundary:(double)arg1 ofType:(int)arg2 ;
+(id)upperBoundary:(double)arg1 ofType:(int)arg2 ;
+(id)activeValue:(double)arg1 ofType:(int)arg2 ;
-(void)_appendDescriptionToString:(id)arg1 atLevel:(int)arg2 ;
-(id)init;
-(/*^block*/id)_applier;
-(void)setType:(int)arg1 ;
-(void)setValue:(double)arg1 ;
-(id)description;
-(int)type;
-(double)_boundaryPull;
-(BOOL)_isLowerBoundary;
-(BOOL)_isUpperBoundary;
-(void)_setBoundaryPull:(double)arg1 ;
-(void)setMinimumActiveValue:(double)arg1 ;
-(void)setMaximumActiveValue:(double)arg1 ;
-(double)minimumActiveValue;
-(double)maximumActiveValue;
-(double)value;
-(void)dealloc;
@end

