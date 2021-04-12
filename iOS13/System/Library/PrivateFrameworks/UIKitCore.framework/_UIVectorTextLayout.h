/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSArray, _UIVectorTextLayoutInfo, _UIVectorTextLayoutParameters;

@interface _UIVectorTextLayout : NSObject {

	NSArray* _runs;
	unsigned long long _numberOfLines;
	CGRect _boundingRect;
	CGRect _usedBoundingRect;
	NSRange _fitRange;
	double _firstLineBaseline;
	double _lastLineBaseline;
	_UIVectorTextLayoutInfo* _layoutInfo;
	CGAffineTransform _coordinateAdjustment;

}

@property (nonatomic,copy,readonly) _UIVectorTextLayoutParameters * parameters; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) CGRect usedBoundingRect; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) NSRange textRange; 
@property (nonatomic,readonly) unsigned long long numberOfLines; 
@property (nonatomic,readonly) unsigned long long numberOfRuns; 
@property (nonatomic,readonly) double firstLineBaseline; 
@property (nonatomic,readonly) double lastLineBaseline; 
@property (nonatomic,readonly) CGAffineTransform coordinateAdjustment;                       //@synthesize coordinateAdjustment=_coordinateAdjustment - In the implementation block
-(id)description;
-(CGSize)size;
-(_UIVectorTextLayoutParameters *)parameters;
-(CGRect)boundingRect;
-(unsigned long long)numberOfLines;
-(id)initWithTextParameters:(id)arg1 ;
-(double)firstLineBaseline;
-(double)lastLineBaseline;
-(unsigned long long)numberOfRuns;
-(void)enumerateRunsUsingBlock:(/*^block*/id)arg1 ;
-(CGRect)usedBoundingRect;
-(CGAffineTransform)coordinateAdjustment;
-(void)_layoutIfNeeded;
-(BOOL)hasLayout;
-(void)resetLayout;
-(NSRange)textRange;
-(id)layoutDescription;
@end

