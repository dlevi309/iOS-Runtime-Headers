/*
* Generated on Thursday, January 14, 2021 at 2:25:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


@protocol NUPurgeableImage;
@class NURegion;

@interface NUPurgeableImageAccessGuard : NSObject {

	NURegion* _accessRegion;
	id<NUPurgeableImage> _accessImage;

}
-(void)_endAccess;
-(void)dealloc;
-(id)initWithRegion:(id)arg1 image:(id)arg2 ;
-(void)_beginAccess;
@end

