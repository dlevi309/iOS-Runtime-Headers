/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSColor;

@interface NSShadow : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _shadowFlags;
	CGSize _shadowOffset;
	double _shadowBlurRadius;
	NSColor* _shadowColor;

}

@property (assign,nonatomic) CGSize shadowOffset; 
@property (assign,nonatomic) double shadowBlurRadius; 
@property (nonatomic,retain) id shadowColor; 
+(id)shadow;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)defaultShadowColor;
-(void)setShadowOffset:(CGSize)arg1 ;
-(void)setShadowColor:(id)arg1 ;
-(id)init;
-(id)initWithShadow:(id)arg1 ;
-(id)shadowColor;
-(CGSize)shadowOffset;
-(void)encodeWithCoder:(id)arg1 ;
-(double)shadowBlurRadius;
-(id)description;
-(void)setShadowBlurRadius:(double)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)applyToGraphicsContext:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

