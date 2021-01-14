/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_UIVectorTextLayoutParameters *)parameters;
-(id)layoutDescription;
-(double)firstLineBaseline;
-(double)lastLineBaseline;
-(CGSize)size;
-(BOOL)hasLayout;
-(NSRange)textRange;
-(id)description;
-(CGRect)boundingRect;
-(void)resetLayout;
-(id)initWithTextParameters:(id)arg1 ;
-(void)enumerateRunsUsingBlock:(/*^block*/id)arg1 ;
-(CGRect)usedBoundingRect;
-(CGAffineTransform)coordinateAdjustment;
-(void)_layoutIfNeeded;
-(unsigned long long)numberOfLines;
-(unsigned long long)numberOfRuns;
@end

