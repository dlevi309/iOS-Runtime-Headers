/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UIInterfaceActionHighlightAttributes : NSObject <NSCopying> {

	double _opacity;
	NSArray* _filters;
	UIColor* _backgroundColor;

}

@property (assign,nonatomic) double opacity;                         //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,retain) NSArray * filters;                      //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)filters;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setFilters:(NSArray *)arg1 ;
-(id)newBackgroundHighlightView;
-(BOOL)_hasNonClearBackgroundColor;
@end

