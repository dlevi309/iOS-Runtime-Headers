/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)recordId;
-(void)setRecordId:(NSString *)arg1 ;
-(BOOL)hasRecordId;
-(void)setMinimumOSName:(NSString *)arg1 ;
-(BOOL)hasMinimumOSName;
-(NSString *)minimumOSName;
@end

