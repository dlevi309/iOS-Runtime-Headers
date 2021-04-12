/*
* Generated on Monday, March 1, 2021 at 2:35:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUPurgeableImage;
@class NURegion;

@interface NUPurgeableImageAccessGuard : NSObject {

	NURegion* _accessRegion;
	id<NUPurgeableImage> _accessImage;

}
-(void)dealloc;
-(id)initWithRegion:(id)arg1 image:(id)arg2 ;
-(void)_beginAccess;
-(void)_endAccess;
@end

