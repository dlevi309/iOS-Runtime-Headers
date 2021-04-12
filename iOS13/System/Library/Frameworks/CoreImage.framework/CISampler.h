/*
* Generated on Monday, March 1, 2021 at 2:30:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)samplerWithImage:(id)arg1 options:(id)arg2 ;
+(id)samplerWithImage:(id)arg1 ;
+(id)samplerWithImage:(id)arg1 keysAndValues:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)extent;
-(void*)_internalRepresentation;
-(const void*)colorSpace;
-(CIFilterShape *)definition;
-(id)initWithImage:(id)arg1 ;
-(id)initWithImage:(id)arg1 options:(id)arg2 ;
-(id)_initWithImage:(id)arg1 key0:(id)arg2 vargs:(char*)arg3 ;
-(id)initWithImage:(id)arg1 keysAndValues:(id)arg2 ;
-(id)opaqueShape;
-(id)wrapMode;
@end

