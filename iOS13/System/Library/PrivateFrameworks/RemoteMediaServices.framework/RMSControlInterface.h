/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)supportsVolumeControl;
-(void)setSupportsSpeakerSelection:(BOOL)arg1 ;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(void)setSupportsDirectionalControl:(BOOL)arg1 ;
-(BOOL)supportsSpeakerSelection;
-(BOOL)supportsDirectionalControl;
@end

