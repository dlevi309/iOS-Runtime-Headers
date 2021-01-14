/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor, NSString;

@interface _UIImageAssetRenditionCacheKey : NSObject {

	UIColor* resolvedTintColor;
	NSString* appearanceName;
	CGSize _size;
	unsigned _drawMode;
	SCD_Struct_UI36 _flags;

}
+(id)keyWithSize:(CGSize)arg1 unresolvedTintColor:(id)arg2 traitCollection:(id)arg3 bold:(BOOL)arg4 letterpress:(BOOL)arg5 drawMode:(unsigned)arg6 ;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

