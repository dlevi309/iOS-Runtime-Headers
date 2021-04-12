/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
*/

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface ADUserTransparencyRequest : PBRequest <NSCopying> {

	NSData* _contentiAdID;
	NSData* _dPID;
	NSData* _iAdID;
	NSString* _iTunesStore;
	NSString* _localeIdentifier;
	BOOL _isSignedInToiTunes;
	BOOL _limitAdTracking;
	SCD_Struct_AD11 _has;

}

@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                            //@synthesize dPID=_dPID - In the implementation block
@property (nonatomic,readonly) BOOL hasLocaleIdentifier; 
@property (nonatomic,retain) NSString * localeIdentifier;              //@synthesize localeIdentifier=_localeIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                           //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasContentiAdID; 
@property (nonatomic,retain) NSData * contentiAdID;                    //@synthesize contentiAdID=_contentiAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasITunesStore; 
@property (nonatomic,retain) NSString * iTunesStore;                   //@synthesize iTunesStore=_iTunesStore - In the implementation block
@property (assign,nonatomic) BOOL hasLimitAdTracking; 
@property (assign,nonatomic) BOOL limitAdTracking;                     //@synthesize limitAdTracking=_limitAdTracking - In the implementation block
@property (assign,nonatomic) BOOL hasIsSignedInToiTunes; 
@property (assign,nonatomic) BOOL isSignedInToiTunes;                  //@synthesize isSignedInToiTunes=_isSignedInToiTunes - In the implementation block
+(id)options;
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(BOOL)hasLimitAdTracking;
-(NSData *)dPID;
-(NSString *)iTunesStore;
-(BOOL)hasITunesStore;
-(BOOL)limitAdTracking;
-(NSData *)iAdID;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLocaleIdentifier;
-(id)description;
-(BOOL)hasDPID;
-(void)setLimitAdTracking:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setITunesStore:(NSString *)arg1 ;
-(void)setHasLimitAdTracking:(BOOL)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setContentiAdID:(NSData *)arg1 ;
-(BOOL)hasContentiAdID;
-(NSData *)contentiAdID;
-(void)setIsSignedInToiTunes:(BOOL)arg1 ;
-(void)setHasIsSignedInToiTunes:(BOOL)arg1 ;
-(BOOL)hasIsSignedInToiTunes;
-(BOOL)isSignedInToiTunes;
@end

