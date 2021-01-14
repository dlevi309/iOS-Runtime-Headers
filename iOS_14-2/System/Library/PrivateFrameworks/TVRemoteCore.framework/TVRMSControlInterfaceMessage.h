/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/

#import <TVRemoteCore/TVRemoteCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface TVRMSControlInterfaceMessage : PBCodable <NSCopying> {

	BOOL _supportsDirectionalControl;
	BOOL _supportsSpeakerSelection;
	BOOL _supportsVolumeControl;
	SCD_Struct_TV1 _has;

}

@property (assign,nonatomic) BOOL hasSupportsSpeakerSelection; 
@property (assign,nonatomic) BOOL supportsSpeakerSelection;                   //@synthesize supportsSpeakerSelection=_supportsSpeakerSelection - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsVolumeControl; 
@property (assign,nonatomic) BOOL supportsVolumeControl;                      //@synthesize supportsVolumeControl=_supportsVolumeControl - In the implementation block
@property (assign,nonatomic) BOOL hasSupportsDirectionalControl; 
@property (assign,nonatomic) BOOL supportsDirectionalControl;                 //@synthesize supportsDirectionalControl=_supportsDirectionalControl - In the implementation block
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(BOOL)supportsVolumeControl;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setSupportsVolumeControl:(BOOL)arg1 ;
-(void)setHasSupportsVolumeControl:(BOOL)arg1 ;
-(BOOL)hasSupportsVolumeControl;
-(void)setSupportsSpeakerSelection:(BOOL)arg1 ;
-(void)setHasSupportsSpeakerSelection:(BOOL)arg1 ;
-(BOOL)hasSupportsSpeakerSelection;
-(void)setSupportsDirectionalControl:(BOOL)arg1 ;
-(void)setHasSupportsDirectionalControl:(BOOL)arg1 ;
-(BOOL)hasSupportsDirectionalControl;
-(BOOL)supportsSpeakerSelection;
-(BOOL)supportsDirectionalControl;
@end

