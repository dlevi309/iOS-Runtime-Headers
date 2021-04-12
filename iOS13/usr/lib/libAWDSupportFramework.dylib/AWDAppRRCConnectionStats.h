/*
* Generated on Monday, March 1, 2021 at 2:35:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDAppRRCConnectionStats : PBCodable <NSCopying> {

	unsigned _bundleBGDuration;
	unsigned _bundleFGDuration;
	NSString* _bundleName;
	unsigned _numMOConnectionTriggered;
	unsigned _numMTConnectionTriggered;
	int _rAT;
	unsigned _totalBytesTransferred;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasRAT; 
@property (assign,nonatomic) int rAT;                                        //@synthesize rAT=_rAT - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleName; 
@property (nonatomic,retain) NSString * bundleName;                          //@synthesize bundleName=_bundleName - In the implementation block
@property (assign,nonatomic) BOOL hasBundleFGDuration; 
@property (assign,nonatomic) unsigned bundleFGDuration;                      //@synthesize bundleFGDuration=_bundleFGDuration - In the implementation block
@property (assign,nonatomic) BOOL hasBundleBGDuration; 
@property (assign,nonatomic) unsigned bundleBGDuration;                      //@synthesize bundleBGDuration=_bundleBGDuration - In the implementation block
@property (assign,nonatomic) BOOL hasNumMOConnectionTriggered; 
@property (assign,nonatomic) unsigned numMOConnectionTriggered;              //@synthesize numMOConnectionTriggered=_numMOConnectionTriggered - In the implementation block
@property (assign,nonatomic) BOOL hasNumMTConnectionTriggered; 
@property (assign,nonatomic) unsigned numMTConnectionTriggered;              //@synthesize numMTConnectionTriggered=_numMTConnectionTriggered - In the implementation block
@property (assign,nonatomic) BOOL hasTotalBytesTransferred; 
@property (assign,nonatomic) unsigned totalBytesTransferred;                 //@synthesize totalBytesTransferred=_totalBytesTransferred - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)bundleName;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setBundleName:(NSString *)arg1 ;
-(unsigned)totalBytesTransferred;
-(void)setTotalBytesTransferred:(unsigned)arg1 ;
-(BOOL)hasBundleName;
-(void)setRAT:(int)arg1 ;
-(int)rAT;
-(void)setHasRAT:(BOOL)arg1 ;
-(BOOL)hasRAT;
-(id)rATAsString:(int)arg1 ;
-(int)StringAsRAT:(id)arg1 ;
-(void)setBundleFGDuration:(unsigned)arg1 ;
-(void)setHasBundleFGDuration:(BOOL)arg1 ;
-(BOOL)hasBundleFGDuration;
-(void)setBundleBGDuration:(unsigned)arg1 ;
-(void)setHasBundleBGDuration:(BOOL)arg1 ;
-(BOOL)hasBundleBGDuration;
-(void)setNumMOConnectionTriggered:(unsigned)arg1 ;
-(void)setHasNumMOConnectionTriggered:(BOOL)arg1 ;
-(BOOL)hasNumMOConnectionTriggered;
-(void)setNumMTConnectionTriggered:(unsigned)arg1 ;
-(void)setHasNumMTConnectionTriggered:(BOOL)arg1 ;
-(BOOL)hasNumMTConnectionTriggered;
-(void)setHasTotalBytesTransferred:(BOOL)arg1 ;
-(BOOL)hasTotalBytesTransferred;
-(unsigned)bundleFGDuration;
-(unsigned)bundleBGDuration;
-(unsigned)numMOConnectionTriggered;
-(unsigned)numMTConnectionTriggered;
@end

