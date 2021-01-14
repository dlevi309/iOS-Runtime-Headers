/*
* Generated on Thursday, January 14, 2021 at 2:21:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
*/

#import <CoreImage/CoreImage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIFilterShape;

@interface CISampler : NSObject <NSCopying> {

	void* _priv;

}

@property (readonly) CIFilterShape * definition; 
@property (readonly) CGRect extent; 
+(id)samplerWithImage:(id)arg1 ;
+(id)samplerWithImage:(id)arg1 keysAndValues:(id)arg2 ;
+(id)samplerWithImage:(id)arg1 options:(id)arg2 ;
-(void*)_internalRepresentation;
-(const void*)colorSpace;
-(id)init;
-(id)initWithImage:(id)arg1 ;
-(id)_initWithImage:(id)arg1 key0:(id)arg2 vargs:(char*)arg3 ;
-(id)opaqueShape;
-(id)initWithImage:(id)arg1 keysAndValues:(id)arg2 ;
-(CGRect)extent;
-(id)debugDescription;
-(id)description;
-(CIFilterShape *)definition;
-(id)wrapMode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithImage:(id)arg1 options:(id)arg2 ;
-(void)dealloc;
@end

