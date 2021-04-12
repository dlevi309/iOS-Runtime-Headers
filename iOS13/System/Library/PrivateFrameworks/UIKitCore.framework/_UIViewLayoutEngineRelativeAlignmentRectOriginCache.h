/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIView, NSISEngine;

@interface _UIViewLayoutEngineRelativeAlignmentRectOriginCache : NSObject {

	CGPoint _cachedOrigin;
	UIView* _delegate;
	NSISEngine* _cacheEngine;
	unsigned long long _variableChangeCount;

}

@property (assign,nonatomic,__weak) NSISEngine * cacheEngine;                     //@synthesize cacheEngine=_cacheEngine - In the implementation block
@property (assign,nonatomic) unsigned long long variableChangeCount;              //@synthesize variableChangeCount=_variableChangeCount - In the implementation block
@property (nonatomic,readonly) CGPoint origin; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,__weak,readonly) UIView * delegate;                          //@synthesize delegate=_delegate - In the implementation block
-(BOOL)isValid;
-(UIView *)delegate;
-(unsigned long long)variableChangeCount;
-(CGPoint)origin;
-(id)initWithDelegate:(id)arg1 ;
-(void)setCacheEngine:(NSISEngine *)arg1 ;
-(NSISEngine *)cacheEngine;
-(void)setVariableChangeCount:(unsigned long long)arg1 ;
@end

