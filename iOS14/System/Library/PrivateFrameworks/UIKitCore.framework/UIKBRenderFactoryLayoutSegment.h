/*
* Generated on Thursday, January 14, 2021 at 2:20:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSString, UIKBRenderTraits;

@interface UIKBRenderFactoryLayoutSegment : NSObject {

	int _rectCount;
	CGRect _rects[10];
	unsigned long long _triangleCorners[10];
	int _edgeCount;
	unsigned long long _edges[10];
	NSString* _cachedKeyNames[10];
	BOOL _requireAllMatches;
	int _states;
	UIKBRenderTraits* _traits;

}

@property (nonatomic,readonly) UIKBRenderTraits * traits;              //@synthesize traits=_traits - In the implementation block
@property (assign,nonatomic) int keyStates;                            //@synthesize states=_states - In the implementation block
@property (assign,nonatomic) BOOL requireAllMatches;                   //@synthesize requireAllMatches=_requireAllMatches - In the implementation block
+(id)segmentWithTraits:(id)arg1 ;
-(UIKBRenderTraits *)traits;
-(BOOL)requireAllMatches;
-(int)keyStates;
-(BOOL)containsPoint:(CGPoint)arg1 inRect:(CGRect)arg2 withKeyplane:(id)arg3 ;
-(void)setRequireAllMatches:(BOOL)arg1 ;
-(void)addLayoutRect:(CGRect)arg1 asTriangle:(unsigned long long)arg2 ;
-(void)addRelativeLayoutRectFromEdge:(unsigned long long)arg1 ofCachedKey:(id)arg2 ;
-(void)setKeyStates:(int)arg1 ;
-(id)initWithTraits:(id)arg1 ;
-(void)dealloc;
@end

