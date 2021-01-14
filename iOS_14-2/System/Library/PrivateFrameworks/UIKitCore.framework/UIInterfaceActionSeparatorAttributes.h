/*
* Generated on Thursday, January 14, 2021 at 2:20:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface UIInterfaceActionSeparatorAttributes : NSObject <NSCopying> {

	NSArray* _filters;
	UIColor* _backgroundColor;
	double _opacity;

}

@property (nonatomic,retain) NSArray * filters;                      //@synthesize filters=_filters - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) double opacity;                         //@synthesize opacity=_opacity - In the implementation block
-(void)setFilters:(NSArray *)arg1 ;
-(id)init;
-(NSArray *)filters;
-(double)opacity;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(UIColor *)backgroundColor;
-(BOOL)_hasNonClearBackgroundColor;
-(id)newSeparatorView;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

