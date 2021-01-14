/*
* Generated on Thursday, January 14, 2021 at 2:23:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWVideoFormatRequirements.h>

@interface BWInferenceVideoFormatRequirements : BWVideoFormatRequirements {

	BOOL _deviceOriented;
	long long _videoContentMode;
	BOOL _includesInvalidContent;
	int _rotationDegrees;

}

@property (assign,nonatomic) BOOL deviceOriented;                      //@synthesize deviceOriented=_deviceOriented - In the implementation block
@property (assign,nonatomic) int rotationDegrees;                      //@synthesize rotationDegrees=_rotationDegrees - In the implementation block
@property (assign,nonatomic) long long videoContentMode;               //@synthesize videoContentMode=_videoContentMode - In the implementation block
@property (assign,nonatomic) BOOL includesInvalidContent;              //@synthesize includesInvalidContent=_includesInvalidContent - In the implementation block
+(id)defaultEspressoFormatRequirementsWithWidth:(long long)arg1 height:(long long)arg2 ;
-(int)rotationDegrees;
-(void)setIncludesInvalidContent:(BOOL)arg1 ;
-(BOOL)deviceOriented;
-(void)setVideoContentMode:(long long)arg1 ;
-(void)setRotationDegrees:(int)arg1 ;
-(id)initWithFormat:(id)arg1 ;
-(BOOL)includesInvalidContent;
-(void)setDeviceOriented:(BOOL)arg1 ;
-(long long)videoContentMode;
@end

