/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSError;

@interface _MRPlaybackSessionMigrateRequestEventProtobuf : PBCodable <NSCopying> {

	double _duration;
	double _endTimestamp;
	long long _errorCode;
	double _startTimestamp;
	NSString* _errorDescription;
	NSString* _name;
	SCD_Struct_MR15 _has;

}

@property (nonatomic,readonly) NSError * error; 
-(id)dictionaryRepresentation;
-(NSError *)error;
-(id)description;
-(unsigned long long)hash;
-(double)calculatedDuration;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

