/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/

#import <IconServices/IconServices-Structs.h>
#import <IconServices/ISImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface ISConcreteImage : ISImage <NSCopying> {

	BOOL _placeholder;
	CGImageRef _cgImage;
	double _scale;
	CGSize _size;
	CGSize _minimumSize;

}

@property (assign) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
-(CGSize)size;
-(double)scale;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(CGSize)minimumSize;
-(BOOL)placeholder;
-(id)_init;
-(CGImageRef)cgImage;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

