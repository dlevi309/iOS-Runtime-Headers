/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface _UICachedBoundingPathBitmapDataReferenceCorner : NSObject <NSSecureCoding> {

	UIBoundingPathBitmapDataCorner* _referenceCorner;

}
+(BOOL)supportsSecureCoding;
+(id)cachedReferenceCornerForRadius:(long long)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIBoundingPathBitmapDataCorner*)referenceCornerCopy;
-(id)initWithReferenceCorner:(UIBoundingPathBitmapDataCorner*)arg1 ;
@end

