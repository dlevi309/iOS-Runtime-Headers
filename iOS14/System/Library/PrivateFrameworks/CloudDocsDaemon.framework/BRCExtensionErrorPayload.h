/*
* Generated on Thursday, January 14, 2021 at 2:26:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface BRCExtensionErrorPayload : PBCodable <NSCopying> {

	NSString* _minimumOSName;
	NSString* _recordId;

}

@property (nonatomic,readonly) BOOL hasMinimumOSName; 
@property (nonatomic,retain) NSString * minimumOSName;              //@synthesize minimumOSName=_minimumOSName - In the implementation block
@property (nonatomic,readonly) BOOL hasRecordId; 
@property (nonatomic,retain) NSString * recordId;                   //@synthesize recordId=_recordId - In the implementation block
-(id)dictionaryRepresentation;
-(NSString *)recordId;
-(void)mergeFrom:(id)arg1 ;
-(void)setRecordId:(NSString *)arg1 ;
-(id)description;
-(BOOL)hasRecordId;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setMinimumOSName:(NSString *)arg1 ;
-(BOOL)hasMinimumOSName;
-(NSString *)minimumOSName;
@end

