/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
*/

#import <RemoteMediaServices/RemoteMediaServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface RMSControlInterfaceMessage : PBCodable <NSCopying> {

	BOOL _supportsDirectionalControl;
	BOOL _supportsSpeakerSelection;
	BOOL _supportsVolumeControl;
	SCD_Struct_RM5 _has;

}

@property (assign,nonatomic) BOOL hasSupportsSpeakerSelection; 
@property (assign,nonatomic) BOOL supportsSpeakerSelection;                   //@synthesize supportsSpeakerSelection=_supportsSpeakerSelection - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsVolumeControl; 
@property (assign,nonatomic) BOOL supportsVolumeControl;                      //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsDirectionalControl; 
@property (assign,nonatomic) BOOL supportsDirectionalControl;                 //@synthesize supportsDirectionalControl=_supportsDirectionalControl - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)supportsVolumeControl;
-(void)setSupportsSpeakerSelection:(BOOL)arg1 ;
-(void)setHasSupportsSpeakerSelection:(BOOL)arg1 ;
-(BOOL)hasSupportsSpeakerSelection;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(void)setHasSupportsVolumeControl:(BOOL)arg1 ;
-(BOOL)hasSupportsVolumeControl;
-(void)setSupportsDirectionalControl:(BOOL)arg1 ;
-(void)setHasSupportsDirectionalControl:(BOOL)arg1 ;
-(BOOL)hasSupportsDirectionalControl;
-(BOOL)supportsSpeakerSelection;
-(BOOL)supportsDirectionalControl;
@end

