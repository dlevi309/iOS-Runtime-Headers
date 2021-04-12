/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRSetHiliteModeMessageProtobuf : PBCodable <NSCopying> {

	BOOL _hiliteMode;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasHiliteMode; 
@property (assign,nonatomic) BOOL hiliteMode;                 //@synthesize hiliteMode=_hiliteMode - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setHiliteMode:(BOOL)arg1 ;
-(BOOL)hiliteMode;
-(void)setHasHiliteMode:(BOOL)arg1 ;
-(BOOL)hasHiliteMode;
@end

