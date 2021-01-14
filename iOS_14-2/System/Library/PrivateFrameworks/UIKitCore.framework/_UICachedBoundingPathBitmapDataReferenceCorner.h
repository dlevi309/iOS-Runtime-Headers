/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject <NSSecureCoding> {

	UIBoundingPathBitmapDataCorner* _referenceCorner;

}
+(BOOL)supportsSecureCoding;
+(id)cachedReferenceCornerForRadius:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(UIBoundingPathBitmapDataCorner*)referenceCornerCopy;
-(id)initWithReferenceCorner:(UIBoundingPathBitmapDataCorner*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

