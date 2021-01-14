/*
* Generated on Thursday, January 14, 2021 at 2:28:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDIMessageCloudKitSyncFailed : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _linkQuality;
	int _nestedErrorCode;
	NSString* _nestedErrorDomain;
	NSString* _syncType;
	int _topLevelErrorCode;
	NSString* _topLevelErrorDomain;
	SCD_Struct_AW1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSyncType; 
@property (nonatomic,retain) NSString * syncType;                         //@synthesize syncType=_syncType - In the implementation block
@property (nonatomic,readonly) BOOL hasTopLevelErrorDomain; 
@property (nonatomic,retain) NSString * topLevelErrorDomain;              //@synthesize topLevelErrorDomain=_topLevelErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasTopLevelErrorCode; 
@property (assign,nonatomic) int topLevelErrorCode;                       //@synthesize topLevelErrorCode=_topLevelErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasNestedErrorDomain; 
@property (nonatomic,retain) NSString * nestedErrorDomain;                //@synthesize nestedErrorDomain=_nestedErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasNestedErrorCode; 
@property (assign,nonatomic) int nestedErrorCode;                         //@synthesize nestedErrorCode=_nestedErrorCode - In the implementation block
@property (assign,nonatomic) BOOL hasLinkQuality; 
@property (assign,nonatomic) int linkQuality;                             //@synthesize linkQuality=_linkQuality - In the implementation block
-(id)dictionaryRepresentation;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(unsigned long long)timestamp;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)syncType;
-(id)description;
-(BOOL)hasLinkQuality;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(unsigned long long)hash;
-(BOOL)hasTimestamp;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSyncType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasSyncType;
-(void)setTopLevelErrorDomain:(NSString *)arg1 ;
-(void)setTopLevelErrorCode:(int)arg1 ;
-(void)setNestedErrorDomain:(NSString *)arg1 ;
-(void)setNestedErrorCode:(int)arg1 ;
-(BOOL)hasTopLevelErrorDomain;
-(void)setHasTopLevelErrorCode:(BOOL)arg1 ;
-(BOOL)hasTopLevelErrorCode;
-(BOOL)hasNestedErrorDomain;
-(void)setHasNestedErrorCode:(BOOL)arg1 ;
-(BOOL)hasNestedErrorCode;
-(NSString *)topLevelErrorDomain;
-(int)topLevelErrorCode;
-(NSString *)nestedErrorDomain;
-(int)nestedErrorCode;
@end

