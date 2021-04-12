/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCImageConverterBase.h>

@interface VCImageRotationConverterBase : VCImageConverterBase {

	OpaqueVTImageRotationSessionRef _rotationSession;
	unsigned _rotationAngle;

}
-(void)dealloc;
-(id)initWithRotationAngle:(unsigned)arg1 formatType:(unsigned)arg2 ;
@end

