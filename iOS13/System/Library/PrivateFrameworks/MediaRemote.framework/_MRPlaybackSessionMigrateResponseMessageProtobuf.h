/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRPlaybackSessionMigrateRequestProtobuf;

@interface _MRPlaybackSessionMigrateResponseMessageProtobuf : PBCodable <NSCopying> {

	_MRPlaybackSessionMigrateRequestProtobuf* _request;

}

@property (nonatomic,readonly) BOOL hasRequest; 
@property (nonatomic,retain) _MRPlaybackSessionMigrateRequestProtobuf * request;              //@synthesize request=_request - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setRequest:(_MRPlaybackSessionMigrateRequestProtobuf *)arg1 ;
-(_MRPlaybackSessionMigrateRequestProtobuf *)request;
-(BOOL)hasRequest;
@end

