/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/Home-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HFCroppedWallpaperInfo : NSObject <NSCopying> {

	long long _source;
	double _scale;
	CGPoint _center;

}

@property (nonatomic,readonly) long long source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) CGPoint center;                //@synthesize center=_center - In the implementation block
@property (nonatomic,readonly) double scale;                  //@synthesize scale=_scale - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)source;
-(id)dictionaryRepresentation;
-(double)scale;
-(CGPoint)center;
-(id)initWithSource:(long long)arg1 center:(CGPoint)arg2 scale:(double)arg3 ;
@end

