/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)colorGradientWithPBColorGradient:(id)arg1 ;
+(id)colorGradientWithColors:(id)arg1 locations:(id)arg2 ;
+(id)whiteGradient;
+(id)colorGradientWithConfigDict:(id)arg1 ;
+(id)blackGradient;
-(NSArray *)locations;
-(NSArray *)colors;
-(CGPoint)startPoint;
-(CGPoint)endPoint;
-(id)init;
-(BOOL)isSimilarToColorGradient:(id)arg1 withinPercentage:(double)arg2 ;
-(unsigned long long)hash;
-(id)pbColorGradient;
-(id)initWithStartPoint:(CGPoint)arg1 endPoint:(CGPoint)arg2 colors:(id)arg3 locations:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

