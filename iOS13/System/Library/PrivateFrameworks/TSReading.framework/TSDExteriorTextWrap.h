/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying> {

	BOOL _isHTMLWrap;
	int _type;
	int _direction;
	int _fitType;
	double _margin;
	double _alphaThreshold;

}

@property (nonatomic,readonly) BOOL isHTMLWrap;                    //@synthesize isHTMLWrap=_isHTMLWrap - In the implementation block
@property (nonatomic,readonly) int type;                           //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) int direction;                      //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) int fitType;                        //@synthesize fitType=_fitType - In the implementation block
@property (nonatomic,readonly) double margin;                      //@synthesize margin=_margin - In the implementation block
@property (nonatomic,readonly) double alphaThreshold;              //@synthesize alphaThreshold=_alphaThreshold - In the implementation block
+(id)exteriorTextWrapWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6 ;
+(id)exteriorTextWrap;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(int)type;
-(int)direction;
-(double)margin;
-(double)alphaThreshold;
-(BOOL)isHTMLWrap;
-(int)fitType;
-(id)initWithIsHTMLWrap:(BOOL)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6 ;
@end

