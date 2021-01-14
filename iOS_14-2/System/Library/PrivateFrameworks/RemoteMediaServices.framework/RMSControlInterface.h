/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/


@interface RMSControlInterface : NSObject {

	BOOL _supportsSpeakerSelection;
	BOOL _supportsVolumeControl;
	BOOL _supportsDirectionalControl;

}

@property (assign,nonatomic) BOOL supportsSpeakerSelection;                //@synthesize supportsSpeakerSelection=_supportsSpeakerSelection - In the implementation block
@property (assign,nonatomic) BOOL supportsVolumeControl;                   //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) BOOL supportsDirectionalControl;              //@synthesize supportsDirectionalControl=_supportsDirectionalControl - In the implementation block
-(BOOL)supportsVolumeControl;
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(void)setSupportsSpeakerSelection:(BOOL)arg1 ;
-(void)setSupportsDirectionalControl:(BOOL)arg1 ;
-(BOOL)supportsSpeakerSelection;
-(BOOL)supportsDirectionalControl;
@end

