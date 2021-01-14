/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIContext.h>

@interface CIBitmapContext : CIContext {

	CIBitmapContextPrivate* _bcpriv;

}
+(id)context;
+(id)contextWithOptions:(id)arg1 ;
+(id)contextWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
+(id)contextWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 options:(id)arg5 ;
-(CGRect)bounds;
-(id)initWithOptions:(id)arg1 ;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(id)init;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 options:(id)arg5 ;
-(BOOL)setBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
-(void)dealloc;
@end

