/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FCColorGradient : NSObject <NSCopying> {

	NSArray* _colors;
	NSArray* _locations;
	CGPoint _startPoint;
	CGPoint _endPoint;

}

@property (nonatomic,readonly) CGPoint startPoint;               //@synthesize startPoint=_startPoint - In the implementation block
@property (nonatomic,readonly) CGPoint endPoint;                 //@synthesize endPoint=_endPoint - In the implementation block
@property (nonatomic,readonly) NSArray * colors;                 //@synthesize colors=_colors - In the implementation block
@property (nonatomic,readonly) NSArray * locations;              //@synthesize locations=_locations - In the implementation block
+(id)colorGradientWithColors:(id)arg1 locations:(id)arg2 ;
+(id)colorGradientWithConfigDict:(id)arg1 ;
+(id)blackGradient;
+(id)whiteGradient;
+(id)colorGradientWithPBColorGradient:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)startPoint;
-(NSArray *)colors;
-(NSArray *)locations;
-(CGPoint)endPoint;
-(id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 colors:(id)arg3 locations:(id)arg4 ;
-(BOOL)isSimilarToColorGradient:(id)arg1 withinPercentage:(double)arg2 ;
-(id)pbColorGradient;
@end

