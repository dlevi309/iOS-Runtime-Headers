/*
* Generated on Thursday, January 14, 2021 at 2:25:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor;

@interface SUShadow : NSObject <NSSecureCoding, NSCopying> {

	UIColor* _color;
	CGSize _offset;
	double _opacity;
	double _radius;

}

@property (nonatomic,retain) UIColor * color;              //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGSize offset;                //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double opacity;               //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) double radius;                //@synthesize radius=_radius - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setRadius:(double)arg1 ;
-(UIColor *)color;
-(double)opacity;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setOpacity:(double)arg1 ;
-(CGSize)offset;
-(double)radius;
-(void)setColor:(UIColor *)arg1 ;
-(void)setOffset:(CGSize)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)applyToLayer:(id)arg1 ;
@end

