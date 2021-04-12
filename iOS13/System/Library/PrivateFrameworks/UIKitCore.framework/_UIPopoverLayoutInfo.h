/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface _UIPopoverLayoutInfo : NSObject <NSCopying> {

	UIEdgeInsets _contentInset;
	double _arrowHeight;
	double _arrowOffset;
	CGSize _preferredContentSize;
	unsigned long long _preferredArrowDirections;
	CGRect _containingFrame;
	UIEdgeInsets _containingFrameInsets;
	CGRect _sourceViewRect;
	BOOL _canOverlapSourceViewRect;
	CGRect _frame;
	double _offset;
	unsigned long long _arrowDirection;
	BOOL _preferLandscapeOrientations;
	BOOL _updatesEnabled;
	NSMutableArray* _candidates;

}

@property (assign,setter=_setUpdatesEnabled:,getter=_updatesEnabled,nonatomic) BOOL updatesEnabled;              //@synthesize updatesEnabled=_updatesEnabled - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;                                                          //@synthesize contentInset=_contentInset - In the implementation block
@property (assign,nonatomic) double arrowHeight;                                                                 //@synthesize arrowHeight=_arrowHeight - In the implementation block
@property (assign,nonatomic) double arrowOffset;                                                                 //@synthesize arrowOffset=_arrowOffset - In the implementation block
@property (assign,nonatomic) CGSize preferredContentSize;                                                        //@synthesize preferredContentSize=_preferredContentSize - In the implementation block
@property (assign,nonatomic) unsigned long long preferredArrowDirections;                                        //@synthesize preferredArrowDirections=_preferredArrowDirections - In the implementation block
@property (assign,nonatomic) CGRect containingFrame;                                                             //@synthesize containingFrame=_containingFrame - In the implementation block
@property (assign,nonatomic) UIEdgeInsets containingFrameInsets;                                                 //@synthesize containingFrameInsets=_containingFrameInsets - In the implementation block
@property (assign,nonatomic) CGRect sourceViewRect;                                                              //@synthesize sourceViewRect=_sourceViewRect - In the implementation block
@property (assign,nonatomic) BOOL canOverlapSourceViewRect;                                                      //@synthesize canOverlapSourceViewRect=_canOverlapSourceViewRect - In the implementation block
@property (assign,nonatomic) BOOL preferLandscapeOrientations;                                                   //@synthesize preferLandscapeOrientations=_preferLandscapeOrientations - In the implementation block
@property (nonatomic,readonly) CGRect frame;                                                                     //@synthesize frame=_frame - In the implementation block
@property (nonatomic,readonly) double offset;                                                                    //@synthesize offset=_offset - In the implementation block
@property (nonatomic,readonly) unsigned long long arrowDirection;                                                //@synthesize arrowDirection=_arrowDirection - In the implementation block
+(id)_observationKeys;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(CGRect)frame;
-(double)offset;
-(CGSize)preferredContentSize;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setPreferredContentSize:(CGSize)arg1 ;
-(UIEdgeInsets)contentInset;
-(void)setCanOverlapSourceViewRect:(BOOL)arg1 ;
-(unsigned long long)arrowDirection;
-(void)setSourceViewRect:(CGRect)arg1 ;
-(double)arrowOffset;
-(void)setArrowOffset:(double)arg1 ;
-(void)setContainingFrameInsets:(UIEdgeInsets)arg1 ;
-(void)updateProperties:(/*^block*/id)arg1 ;
-(CGRect)sourceViewRect;
-(CGRect)containingFrame;
-(UIEdgeInsets)containingFrameInsets;
-(double)arrowHeight;
-(void)setArrowHeight:(double)arg1 ;
-(void)setPreferredArrowDirections:(unsigned long long)arg1 ;
-(void)setContainingFrame:(CGRect)arg1 ;
-(void)setPreferLandscapeOrientations:(BOOL)arg1 ;
-(BOOL)canOverlapSourceViewRect;
-(id)candidates;
-(void)_setUpdatesEnabled:(BOOL)arg1 ;
-(void)_updateOutputs;
-(unsigned long long)preferredArrowDirections;
-(BOOL)preferLandscapeOrientations;
-(CGSize)_popoverViewSizeForContentSize:(CGSize)arg1 arrowDirection:(unsigned long long)arg2 ;
-(BOOL)_updatesEnabled;
@end

