/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosImagingFoundation.framework/PhotosImagingFoundation
*/

#import <PhotosImagingFoundation/PhotosImagingFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface IPARectArray : NSObject <NSCopying, NSMutableCopying> {

	RectArray* _imp;

}
+(id)rectArray;
+(id)rectArrayWithRect:(CGRect)arg1 ;
-(id)init;
-(CGRect)rectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithRect:(CGRect)arg1 ;
-(BOOL)isEmpty;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(void)enumerateRects:(/*^block*/id)arg1 ;
-(id)initWithRectArray:(id)arg1 ;
@end

