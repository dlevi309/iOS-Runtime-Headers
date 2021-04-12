/*
* Generated on Monday, March 1, 2021 at 2:30:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(id)initWithOptions:(id)arg1 ;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
-(id)initWithBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 options:(id)arg5 ;
-(BOOL)setBitmap:(void*)arg1 rowBytes:(long long)arg2 bounds:(CGRect)arg3 format:(int)arg4 ;
-(void)drawImage:(id)arg1 inRect:(CGRect)arg2 fromRect:(CGRect)arg3 ;
-(CGRect)bounds;
@end

