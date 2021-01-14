/*
* Generated on Thursday, January 14, 2021 at 2:22:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMMessagePresentationTrigger : PBCodable <NSCopying> {

	NSString* _bundleIdentifier;
	int _kind;
	NSString* _triggerName;
	SCD_Struct_IC7 _has;

}

@property (nonatomic,readonly) BOOL hasTriggerName; 
@property (nonatomic,retain) NSString * triggerName;                   //@synthesize triggerName=_triggerName - In the implementation block
@property (assign,nonatomic) BOOL hasKind; 
@property (assign,nonatomic) int kind;                                 //@synthesize kind=_kind - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleIdentifier; 
@property (nonatomic,retain) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)bundleIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(int)kind;
-(BOOL)hasKind;
-(void)setHasKind:(BOOL)arg1 ;
-(id)kindAsString:(int)arg1 ;
-(int)StringAsKind:(id)arg1 ;
-(id)description;
-(void)setTriggerName:(NSString *)arg1 ;
-(BOOL)hasTriggerName;
-(NSString *)triggerName;
-(void)setKind:(int)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(BOOL)hasBundleIdentifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

