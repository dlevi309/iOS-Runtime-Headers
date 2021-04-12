/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/


#import <AppSupportUI/AppSupportUI-Structs.h>
@interface NUISizeCache : NSObject {

	nui_size_cache* _sizeCache;
	BOOL _threadSafe;

}
-(void)dealloc;
-(void)invalidateCache;
-(id)initForAsynchronousAccess:(BOOL)arg1 ;
-(BOOL)getSize:(CGSize*)arg1 forTargetSize:(CGSize)arg2 isSizeDependentOnPerpendicularAxis:(BOOL)arg3 ;
-(void)insertSize:(CGSize)arg1 forTargetSize:(CGSize)arg2 ;
@end

