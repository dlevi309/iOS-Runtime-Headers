/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/REImage.h>

@interface RECGImageImage : REImage {

	CGImageRef _CGImage;
	double _scale;

}

@property (nonatomic,readonly) CGImageRef CGImage;              //@synthesize CGImage=_CGImage - In the implementation block
@property (nonatomic,readonly) double scale;                    //@synthesize scale=_scale - In the implementation block
-(id)image;
-(double)scale;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)CGImage;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithImage:(CGImageRef)arg1 scale:(double)arg2 ;
@end

