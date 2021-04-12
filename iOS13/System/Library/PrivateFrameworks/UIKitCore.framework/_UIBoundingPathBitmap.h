/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UIBoundingPathBitmap : NSObject <NSSecureCoding> {

	UIBoundingPathBitmapData* _bitmapData;

}

@property (nonatomic,readonly) UIBoundingPathBitmapData* bitmapData;              //@synthesize bitmapData=_bitmapData - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)debugQuickLookObject;
-(id)initWithBitmapData:(UIBoundingPathBitmapData*)arg1 ;
-(UIBoundingPathBitmapData*)bitmapData;
-(id)boundingPathBitmapWithRect:(UIIntegralRect)arg1 cornerRadii:(UIIntegralCornerRadii)arg2 ;
-(id)_imageRepresentation;
-(id)initWithSize:(UIIntegralSize)arg1 containsPoint:(/*^block*/id)arg2 ;
-(id)boundingPathBitmapWithRect:(UIIntegralRect)arg1 ;
@end

