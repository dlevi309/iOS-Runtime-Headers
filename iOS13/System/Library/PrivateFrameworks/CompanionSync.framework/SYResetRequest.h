/*
* Generated on Monday, March 1, 2021 at 2:32:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(SYMessageHeader *)header;
-(void)setHeader:(SYMessageHeader *)arg1 ;
-(NSString *)cancelSessionID;
-(void)setCancelSessionID:(NSString *)arg1 ;
-(BOOL)hasCancelSessionID;
@end

