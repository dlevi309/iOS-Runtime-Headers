/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, UIColor;

@interface HKGradient : NSObject <NSCopying> {

	NSArray* _colors;
	NSArray* _locations;

}

@property (nonatomic,retain) NSArray * colors;                     //@synthesize colors=_colors - In the implementation block
@property (nonatomic,retain) NSArray * locations;                  //@synthesize locations=_locations - In the implementation block
@property (nonatomic,readonly) UIColor * topColor; 
@property (nonatomic,readonly) UIColor * bottomColor; 
+(id)hrui_resultsSeparatorGradient;
+(id)defaultGradient;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(NSArray *)colors;
-(NSArray *)locations;
-(UIColor *)topColor;
-(UIColor *)bottomColor;
-(id)initWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(id)initWithColors:(id)arg1 locations:(id)arg2 ;
-(BOOL)isEqualToHKGradient:(id)arg1 ;
@end

