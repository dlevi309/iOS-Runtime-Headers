/*
* Generated on Thursday, January 14, 2021 at 2:24:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)locations;
-(NSArray *)colors;
-(void)setColors:(NSArray *)arg1 ;
-(void)setLocations:(NSArray *)arg1 ;
-(unsigned long long)hash;
-(id)initWithTopColor:(id)arg1 bottomColor:(id)arg2 ;
-(UIColor *)topColor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithColors:(id)arg1 locations:(id)arg2 ;
-(BOOL)isEqualToHKGradient:(id)arg1 ;
-(UIColor *)bottomColor;
@end

