/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@class PVImageBuffer;

@interface PVComputeDenseCRF : NSObject {

	PVImageBuffer* _color;
	PVImageBuffer* _proxy;

}
-(id)initWithColor:(id)arg1 proximity:(id)arg2 ;
-(void)generateMatte:(id)arg1 ;
@end

