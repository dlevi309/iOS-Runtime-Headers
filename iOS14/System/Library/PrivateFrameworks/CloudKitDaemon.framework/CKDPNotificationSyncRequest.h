/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPNotificationSyncRequest : PBRequest <NSCopying> {

	unsigned _maxChanges;
	NSData* _serverChangeToken;
	BOOL _wantsChanges;
	SCD_Struct_CK4 _has;

}

@property (nonatomic,readonly) BOOL hasServerChangeToken; 
@property (nonatomic,retain) NSData * serverChangeToken;               //@synthesize serverChangeToken=_serverChangeToken - In the implementation block
@property (assign,nonatomic) BOOL hasMaxChanges; 
@property (assign,nonatomic) unsigned maxChanges;                      //@synthesize maxChanges=_maxChanges - In the implementation block
@property (assign,nonatomic) BOOL hasWantsChanges; 
@property (assign,nonatomic) BOOL wantsChanges;                        //@synthesize wantsChanges=_wantsChanges - In the implementation block
+(id)options;
-(id)dictionaryRepresentation;
-(void)setServerChangeToken:(NSData *)arg1 ;
-(Class)responseClass;
-(unsigned)requestTypeCode;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)wantsChanges;
-(void)setWantsChanges:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)serverChangeToken;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasServerChangeToken;
-(void)setMaxChanges:(unsigned)arg1 ;
-(void)setHasMaxChanges:(BOOL)arg1 ;
-(BOOL)hasMaxChanges;
-(void)setHasWantsChanges:(BOOL)arg1 ;
-(BOOL)hasWantsChanges;
-(unsigned)maxChanges;
@end

