/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
*/


@class NSMutableDictionary, CRCameraReader;

@interface CRInsightsContext : NSObject {

	NSMutableDictionary* _info;
	CRCameraReader* _cameraReader;

}

@property (nonatomic,retain) NSMutableDictionary * info;                        //@synthesize info=_info - In the implementation block
@property (assign,nonatomic,__weak) CRCameraReader * cameraReader;              //@synthesize cameraReader=_cameraReader - In the implementation block
-(id)init;
-(id)description;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(NSMutableDictionary *)info;
-(id)initWithContext:(id)arg1 ;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(CRCameraReader *)cameraReader;
-(void)setCameraReader:(CRCameraReader *)arg1 ;
@end

