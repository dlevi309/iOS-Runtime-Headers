/*
* Generated on Thursday, January 14, 2021 at 2:27:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreRecognition.framework/CoreRecognition
*/


@class NSMutableDictionary, CRCameraReader;

@interface CRInsightsContext : NSObject {

	NSMutableDictionary* _info;
	CRCameraReader* _cameraReader;

}

@property (nonatomic,retain) NSMutableDictionary * info;                        //@synthesize info=_info - In the implementation block
@property (assign,nonatomic,__weak) CRCameraReader * cameraReader;              //@synthesize cameraReader=_cameraReader - In the implementation block
-(NSMutableDictionary *)info;
-(id)init;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)initWithContext:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(id)description;
-(void)setInfo:(NSMutableDictionary *)arg1 ;
-(CRCameraReader *)cameraReader;
-(void)setCameraReader:(CRCameraReader *)arg1 ;
@end

