/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/_UIScreenBoundingPathUtilities.h>

@class _UIBoundingPathBitmap;

@interface _UIScreenComplexBoundingPathUtilities : _UIScreenBoundingPathUtilities {

	long long _type;
	_UIBoundingPathBitmap* _bitmap;

}
+(BOOL)isScreenSupported:(id)arg1 ;
-(id)initWithScreen:(id)arg1 ;
-(void)_loadBitmapForScreen:(id)arg1 type:(long long)arg2 ;
-(id)boundingPathForWindow:(id)arg1 ;
@end

