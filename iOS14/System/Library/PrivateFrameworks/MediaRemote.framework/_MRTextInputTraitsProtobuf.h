/*
* Generated on Thursday, January 14, 2021 at 2:21:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface _MRTextInputTraitsProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR25* _pINEntrySeparatorIndexes;
	unsigned long long _validTextRangeLength;
	unsigned long long _validTextRangeLocation;
	int _autocapitalizationType;
	int _keyboardType;
	int _returnKeyType;
	BOOL _autocorrection;
	BOOL _enablesReturnKeyAutomatically;
	BOOL _secureTextEntry;
	BOOL _spellchecking;
	SCD_Struct_MR26 _has;

}
-(id)dictionaryRepresentation;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

