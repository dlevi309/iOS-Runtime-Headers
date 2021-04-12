/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(void)setOffset:(CGSize)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(CGSize)offset;
-(void)applyToLayer:(id)arg1 ;
@end

