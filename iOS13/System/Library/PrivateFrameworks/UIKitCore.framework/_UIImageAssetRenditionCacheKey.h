/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor, NSString;

@interface _UIImageAssetRenditionCacheKey : NSObject {

	UIColor* resolvedTintColor;
	NSString* appearanceName;
	CGSize _size;
	unsigned _drawMode;
	SCD_Struct_UI31 _flags;

}
+(id)keyWithSize:(CGSize)arg1 unresolvedTintColor:(id)arg2 traitCollection:(id)arg3 bold:(BOOL)arg4 letterpress:(BOOL)arg5 drawMode:(unsigned)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

