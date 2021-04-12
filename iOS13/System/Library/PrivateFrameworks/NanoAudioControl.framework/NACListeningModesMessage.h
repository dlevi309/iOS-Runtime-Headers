/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)error;
-(NSString *)category;
-(void)setCategory:(NSString *)arg1 ;
-(void)setError:(NSData *)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasCategory;
-(BOOL)hasError;
-(int)originIdentifier;
-(void)setAvailableListeningModes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)availableListeningModes;
-(void)setOriginIdentifier:(int)arg1 ;
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

