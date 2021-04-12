/*
* Generated on Monday, March 1, 2021 at 2:35:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(unsigned long long)timestamp;
-(BOOL)hasTimestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSString *)syncType;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(int)linkQuality;
-(void)setLinkQuality:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(void)setSyncType:(NSString *)arg1 ;
-(BOOL)hasSyncType;
-(void)setTopLevelErrorDomain:(NSString *)arg1 ;
-(void)setTopLevelErrorCode:(int)arg1 ;
-(void)setNestedErrorDomain:(NSString *)arg1 ;
-(void)setNestedErrorCode:(int)arg1 ;
-(void)setHasLinkQuality:(BOOL)arg1 ;
-(BOOL)hasLinkQuality;
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

