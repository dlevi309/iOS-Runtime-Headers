/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <NanoAudioControl/NanoAudioControl-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString, NSData;

@interface NACListeningModesMessage : PBCodable <NSCopying> {

	NSMutableArray* _availableListeningModes;
	NSString* _category;
	NSString* _currentListeningMode;
	NSData* _error;
	int _originIdentifier;
	SCD_Struct_NA2 _has;

}

@property (nonatomic,retain) NSMutableArray * availableListeningModes;              //@synthesize availableListeningModes=_availableListeningModes - In the implementation block
@property (nonatomic,readonly) BOOL hasCurrentListeningMode; 
@property (nonatomic,retain) NSString * currentListeningMode;                       //@synthesize currentListeningMode=_currentListeningMode - In the implementation block
@property (nonatomic,readonly) BOOL hasCategory; 
@property (nonatomic,retain) NSString * category;                                   //@synthesize category=_category - In the implementation block
@property (assign,nonatomic) BOOL hasOriginIdentifier; 
@property (assign,nonatomic) int originIdentifier;                                  //@synthesize originIdentifier=_originIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasError; 
@property (nonatomic,retain) NSData * error;                                        //@synthesize error=_error - In the implementation block
+(Class)availableListeningModeType;
-(id)dictionaryRepresentation;
-(void)setCategory:(NSString *)arg1 ;
-(int)originIdentifier;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)category;
-(void)setError:(NSData *)arg1 ;
-(NSData *)error;
-(id)description;
-(BOOL)hasCategory;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasError;
-(void)writeTo:(id)arg1 ;
-(void)setOriginIdentifier:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAvailableListeningModes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)availableListeningModes;
-(void)setHasOriginIdentifier:(BOOL)arg1 ;
-(BOOL)hasOriginIdentifier;
-(NSString *)currentListeningMode;
-(void)setCurrentListeningMode:(NSString *)arg1 ;
-(void)addAvailableListeningMode:(id)arg1 ;
-(unsigned long long)availableListeningModesCount;
-(BOOL)hasCurrentListeningMode;
-(void)clearAvailableListeningModes;
-(id)availableListeningModeAtIndex:(unsigned long long)arg1 ;
@end

