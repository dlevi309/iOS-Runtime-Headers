/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CGPoint)origin;
-(UIView *)delegate;
-(unsigned long long)variableChangeCount;
-(void)setVariableChangeCount:(unsigned long long)arg1 ;
-(void)setCacheEngine:(NSISEngine *)arg1 ;
-(BOOL)isValid;
-(id)initWithDelegate:(id)arg1 ;
-(NSISEngine *)cacheEngine;
@end

