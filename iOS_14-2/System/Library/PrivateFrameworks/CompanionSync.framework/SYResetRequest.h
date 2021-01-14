/*
* Generated on Thursday, January 14, 2021 at 2:24:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
*/

#import <CompanionSync/CompanionSync-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SYMessageHeader;

@interface SYResetRequest : PBRequest <NSCopying> {

	NSString* _cancelSessionID;
	SYMessageHeader* _header;

}

@property (nonatomic,retain) SYMessageHeader * header;                //@synthesize header=_header - In the implementation block
@property (nonatomic,readonly) BOOL hasCancelSessionID; 
@property (nonatomic,retain) NSString * cancelSessionID;              //@synthesize cancelSessionID=_cancelSessionID - In the implementation block
-(id)dictionaryRepresentation;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(SYMessageHeader *)header;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)cancelSessionID;
-(void)setCancelSessionID:(NSString *)arg1 ;
-(BOOL)hasCancelSessionID;
@end

