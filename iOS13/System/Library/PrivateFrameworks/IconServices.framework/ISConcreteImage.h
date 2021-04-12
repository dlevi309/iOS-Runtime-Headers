/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_init;
-(CGSize)size;
-(double)scale;
-(CGSize)minimumSize;
-(void)setPlaceholder:(BOOL)arg1 ;
-(void)setMinimumSize:(CGSize)arg1 ;
-(BOOL)placeholder;
-(CGImageRef)cgImage;
-(id)initWithCGImage:(CGImageRef)arg1 scale:(double)arg2 minimumSize:(CGSize)arg3 placeholder:(BOOL)arg4 ;
@end

