/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

