/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRAudioFormatSettingsProtobuf, NSMutableArray;

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying> {

	_MRAudioFormatSettingsProtobuf* _defaultFormat;
	NSMutableArray* _supportedFormats;

}

@property (nonatomic,retain) NSMutableArray * supportedFormats;                           //@synthesize supportedFormats=_supportedFormats - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultFormat; 
@property (nonatomic,retain) _MRAudioFormatSettingsProtobuf * defaultFormat;              //@synthesize defaultFormat=_defaultFormat - In the implementation block
+(Class)supportedFormatsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(_MRAudioFormatSettingsProtobuf *)defaultFormat;
-(NSMutableArray *)supportedFormats;
-(void)addSupportedFormats:(id)arg1 ;
-(unsigned long long)supportedFormatsCount;
-(void)clearSupportedFormats;
-(id)supportedFormatsAtIndex:(unsigned long long)arg1 ;
-(void)setDefaultFormat:(_MRAudioFormatSettingsProtobuf *)arg1 ;
-(BOOL)hasDefaultFormat;
-(void)setSupportedFormats:(NSMutableArray *)arg1 ;
@end

