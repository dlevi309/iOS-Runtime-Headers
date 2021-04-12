/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSString, SXTextExclusionPathWrapper, UIBezierPath;

@interface SXTextExclusionPath : NSObject {

	BOOL _fullBleed;
	int _type;
	int _lineVerticalAlignment;
	double _padding;
	double _verticalAlignmentFactor;
	NSString* _componentIdentifier;
	/*^block*/id _startBlock;
	/*^block*/id _minYBlock;
	/*^block*/id _completionBlock;
	SXTextExclusionPathWrapper* _wrapper;
	CGPoint _actualPosition;
	CGPoint _position;
	CGPoint _anchorPoint;
	NSRange _range;
	UIEdgeInsets _insets;
	CGRect _exclusionRect;

}

@property (nonatomic,readonly) SXTextExclusionPathWrapper * wrapper;              //@synthesize wrapper=_wrapper - In the implementation block
@property (assign,nonatomic) CGPoint actualPosition;                              //@synthesize actualPosition=_actualPosition - In the implementation block
@property (assign,nonatomic) CGRect exclusionRect;                                //@synthesize exclusionRect=_exclusionRect - In the implementation block
@property (nonatomic,readonly) int type;                                          //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) CGPoint position;                                  //@synthesize position=_position - In the implementation block
@property (nonatomic,readonly) CGPoint anchorPoint;                               //@synthesize anchorPoint=_anchorPoint - In the implementation block
@property (assign,nonatomic) NSRange range;                                       //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) UIBezierPath * path; 
@property (nonatomic,readonly) id<TSDWrappable> wrappable; 
@property (assign,nonatomic) double padding;                                      //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double verticalAlignmentFactor;                      //@synthesize verticalAlignmentFactor=_verticalAlignmentFactor - In the implementation block
@property (assign,nonatomic) int lineVerticalAlignment;                           //@synthesize lineVerticalAlignment=_lineVerticalAlignment - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets insets;                               //@synthesize insets=_insets - In the implementation block
@property (assign,nonatomic) BOOL fullBleed;                                      //@synthesize fullBleed=_fullBleed - In the implementation block
@property (nonatomic,retain) NSString * componentIdentifier;                      //@synthesize componentIdentifier=_componentIdentifier - In the implementation block
@property (nonatomic,copy) id startBlock;                                         //@synthesize startBlock=_startBlock - In the implementation block
@property (nonatomic,copy) id minYBlock;                                          //@synthesize minYBlock=_minYBlock - In the implementation block
@property (nonatomic,copy) id completionBlock;                                    //@synthesize completionBlock=_completionBlock - In the implementation block
-(id)description;
-(int)type;
-(UIBezierPath *)path;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(CGPoint)position;
-(NSRange)range;
-(void)setPadding:(double)arg1 ;
-(CGPoint)anchorPoint;
-(void)setRange:(NSRange)arg1 ;
-(double)padding;
-(UIEdgeInsets)insets;
-(NSString *)componentIdentifier;
-(void)setComponentIdentifier:(NSString *)arg1 ;
-(CGRect)exclusionRect;
-(id)startBlock;
-(id)initWithTextRange:(NSRange)arg1 position:(CGPoint)arg2 rect:(CGRect)arg3 withInsets:(UIEdgeInsets)arg4 ;
-(void)setVerticalAlignmentFactor:(double)arg1 ;
-(void)setLineVerticalAlignment:(int)arg1 ;
-(void)setFullBleed:(BOOL)arg1 ;
-(void)setMinYBlock:(id)arg1 ;
-(int)lineVerticalAlignment;
-(double)verticalAlignmentFactor;
-(void)adjustYPositionWithCurrentPosition:(CGPoint)arg1 ;
-(void)setActualPosition:(CGPoint)arg1 ;
-(BOOL)fullBleed;
-(void)setExclusionRect:(CGRect)arg1 ;
-(void)callStartBlock;
-(void)callCompletionBlock;
-(CGPoint)actualPosition;
-(SXTextExclusionPathWrapper *)wrapper;
-(void)setStartBlock:(id)arg1 ;
-(id)minYBlock;
-(id<TSDWrappable>)wrappable;
@end

