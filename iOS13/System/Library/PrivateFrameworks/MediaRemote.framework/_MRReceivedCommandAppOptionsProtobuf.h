/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRReceivedCommandAppOptionsProtobuf : PBCodable <NSCopying> {

	BOOL _launchApplication;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasLaunchApplication; 
@property (assign,nonatomic) BOOL launchApplication;                 //@synthesize launchApplication=_launchApplication - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLaunchApplication:(BOOL)arg1 ;
-(void)setHasLaunchApplication:(BOOL)arg1 ;
-(BOOL)hasLaunchApplication;
-(BOOL)launchApplication;
@end

