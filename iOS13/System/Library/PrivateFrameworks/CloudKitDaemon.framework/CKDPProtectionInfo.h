/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CKDPProtectionInfo : PBCodable <NSCopying> {

	NSData* _protectionInfo;
	NSString* _protectionInfoTag;

}

@property (nonatomic,readonly) BOOL hasProtectionInfo; 
@property (nonatomic,retain) NSData * protectionInfo;                   //@synthesize protectionInfo=_protectionInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasProtectionInfoTag; 
@property (nonatomic,retain) NSString * protectionInfoTag;              //@synthesize protectionInfoTag=_protectionInfoTag - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSData *)protectionInfo;
-(void)setProtectionInfo:(NSData *)arg1 ;
-(BOOL)hasProtectionInfo;
-(void)setProtectionInfoTag:(NSString *)arg1 ;
-(BOOL)hasProtectionInfoTag;
-(NSString *)protectionInfoTag;
@end

