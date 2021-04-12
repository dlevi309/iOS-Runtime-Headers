/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRTextInputTraitsProtobuf, NSString;

@interface _MRTextEditingAttributesProtobuf : PBCodable <NSCopying> {

	_MRTextInputTraitsProtobuf* _inputTraits;
	NSString* _prompt;
	NSString* _title;

}

@property (nonatomic,readonly) BOOL hasTitle; 
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasPrompt; 
@property (nonatomic,retain) NSString * prompt;                                     //@synthesize prompt=_prompt - In the implementation block
@property (nonatomic,readonly) BOOL hasInputTraits; 
@property (nonatomic,retain) _MRTextInputTraitsProtobuf * inputTraits;              //@synthesize inputTraits=_inputTraits - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasTitle;
-(NSString *)prompt;
-(void)setPrompt:(NSString *)arg1 ;
-(void)setInputTraits:(_MRTextInputTraitsProtobuf *)arg1 ;
-(BOOL)hasPrompt;
-(BOOL)hasInputTraits;
-(_MRTextInputTraitsProtobuf *)inputTraits;
@end

