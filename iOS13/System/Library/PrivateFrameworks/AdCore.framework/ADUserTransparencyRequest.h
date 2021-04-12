/*
* Generated on Monday, March 1, 2021 at 2:34:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localeIdentifier;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setLocaleIdentifier:(NSString *)arg1 ;
-(BOOL)hasLocaleIdentifier;
-(void)setDPID:(NSData *)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(BOOL)hasIAdID;
-(BOOL)hasDPID;
-(NSData *)iAdID;
-(NSData *)dPID;
-(void)setContentiAdID:(NSData *)arg1 ;
-(BOOL)hasContentiAdID;
-(NSData *)contentiAdID;
-(void)setITunesStore:(NSString *)arg1 ;
-(BOOL)hasITunesStore;
-(void)setLimitAdTracking:(BOOL)arg1 ;
-(void)setHasLimitAdTracking:(BOOL)arg1 ;
-(BOOL)hasLimitAdTracking;
-(NSString *)iTunesStore;
-(BOOL)limitAdTracking;
-(void)setIsSignedInToiTunes:(BOOL)arg1 ;
-(void)setHasIsSignedInToiTunes:(BOOL)arg1 ;
-(BOOL)hasIsSignedInToiTunes;
-(BOOL)isSignedInToiTunes;
@end

