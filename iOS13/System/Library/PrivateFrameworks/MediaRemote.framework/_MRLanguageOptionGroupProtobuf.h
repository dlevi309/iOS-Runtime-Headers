/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRLanguageOptionProtobuf, NSMutableArray;

@interface _MRLanguageOptionGroupProtobuf : PBCodable <NSCopying> {

	_MRLanguageOptionProtobuf* _defaultLanguageOption;
	NSMutableArray* _languageOptions;
	BOOL _allowEmptySelection;
	SCD_Struct_MR4 _has;

}

@property (assign,nonatomic) BOOL hasAllowEmptySelection; 
@property (assign,nonatomic) BOOL allowEmptySelection;                                       //@synthesize allowEmptySelection=_allowEmptySelection - In the implementation block
@property (nonatomic,readonly) BOOL hasDefaultLanguageOption; 
@property (nonatomic,retain) _MRLanguageOptionProtobuf * defaultLanguageOption;              //@synthesize defaultLanguageOption=_defaultLanguageOption - In the implementation block
@property (nonatomic,retain) NSMutableArray * languageOptions;                               //@synthesize languageOptions=_languageOptions - In the implementation block
+(Class)languageOptionsType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSMutableArray *)languageOptions;
-(_MRLanguageOptionProtobuf *)defaultLanguageOption;
-(BOOL)allowEmptySelection;
-(void)setAllowEmptySelection:(BOOL)arg1 ;
-(void)setDefaultLanguageOption:(_MRLanguageOptionProtobuf *)arg1 ;
-(void)setLanguageOptions:(NSMutableArray *)arg1 ;
-(void)addLanguageOptions:(id)arg1 ;
-(unsigned long long)languageOptionsCount;
-(void)clearLanguageOptions;
-(id)languageOptionsAtIndex:(unsigned long long)arg1 ;
-(void)setHasAllowEmptySelection:(BOOL)arg1 ;
-(BOOL)hasAllowEmptySelection;
-(BOOL)hasDefaultLanguageOption;
@end

