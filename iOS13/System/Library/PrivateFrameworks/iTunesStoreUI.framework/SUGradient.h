/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSLock, NSArray;

@interface SUGradient : NSObject <NSSecureCoding, NSCopying> {

	NSMutableArray* _colorStops;
	NSLock* _lock;
	SUGradientPoint _p0;
	SUGradientPoint _p1;
	BOOL _sorted;
	long long _type;

}

@property (readonly) long long gradientType; 
@property (readonly) SUGradientPoint p0; 
@property (readonly) SUGradientPoint p1; 
@property (readonly) NSArray * colorStopColors; 
@property (readonly) NSArray * colorStopOffsets; 
@property (readonly) long long numberOfColorStops; 
+(BOOL)supportsSecureCoding;
+(id)gradientWithColor:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPropertyList:(id)arg1 ;
-(id)initWithType:(long long)arg1 ;
-(SUGradientPoint)p1;
-(long long)gradientType;
-(void)addColorStopWithOffset:(double)arg1 color:(CGColorRef)arg2 ;
-(CGShadingRef)copyShading;
-(id)initWithPoint0:(SUGradientPoint)arg1 point1:(SUGradientPoint)arg2 type:(long long)arg3 ;
-(id)newPatternColorWithSize:(CGSize)arg1 opaque:(BOOL)arg2 ;
-(NSArray *)colorStopColors;
-(CGGradientRef)copyCGGradient;
-(SUGradientPoint)p0;
-(NSArray *)colorStopOffsets;
-(long long)numberOfColorStops;
@end

