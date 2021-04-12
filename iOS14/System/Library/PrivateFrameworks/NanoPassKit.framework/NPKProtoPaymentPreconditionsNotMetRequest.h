/*
* Generated on Thursday, January 14, 2021 at 2:28:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying> {

	int _failedPrecondition;
	NSMutableArray* _passIDs;

}

@property (assign,nonatomic) int failedPrecondition;                //@synthesize failedPrecondition=_failedPrecondition - In the implementation block
@property (nonatomic,retain) NSMutableArray * passIDs;              //@synthesize passIDs=_passIDs - In the implementation block
+(Class)passIDsType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(NSMutableArray *)passIDs;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)failedPrecondition;
-(void)setPassIDs:(NSMutableArray *)arg1 ;
-(void)addPassIDs:(id)arg1 ;
-(unsigned long long)passIDsCount;
-(void)clearPassIDs;
-(id)passIDsAtIndex:(unsigned long long)arg1 ;
-(id)failedPreconditionAsString:(int)arg1 ;
-(int)StringAsFailedPrecondition:(id)arg1 ;
-(void)setFailedPrecondition:(int)arg1 ;
@end

