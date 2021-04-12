/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KeychainCircle.framework/KeychainCircle
*/

#import <KeychainCircle/KeychainCircle-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface KCInitialMessageData : PBCodable <NSCopying> {

	NSData* _prepareMessage;

}

@property (nonatomic,readonly) BOOL hasPrepareMessage; 
@property (nonatomic,retain) NSData * prepareMessage;               //@synthesize prepareMessage=_prepareMessage - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasPrepareMessage;
-(NSData *)prepareMessage;
-(void)setPrepareMessage:(NSData *)arg1 ;
@end

