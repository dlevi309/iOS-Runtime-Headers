/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/


#import <AppSupportUI/AppSupportUI-Structs.h>
@interface NUISizeCache : NSObject {

	nui_size_cache* _sizeCache;
	BOOL _threadSafe;

}
-(void)invalidateCache;
-(id)initForAsynchronousAccess:(BOOL)arg1 ;
-(BOOL)getSize:(CGSize*)arg1 forTargetSize:(CGSize)arg2 isSizeDependentOnPerpendicularAxis:(BOOL)arg3 ;
-(void)insertSize:(CGSize)arg1 forTargetSize:(CGSize)arg2 ;
-(void)dealloc;
@end

