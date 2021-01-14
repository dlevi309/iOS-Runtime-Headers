/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface CKDPStreamingAssetFooter : PBCodable <NSCopying> {

	NSData* _md5;
	int _status;

}

@property (assign,nonatomic) int status;                //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSData * md5;              //@synthesize md5=_md5 - In the implementation block
-(NSData *)md5;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(void)setMd5:(NSData *)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

