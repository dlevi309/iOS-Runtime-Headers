/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CKDPListPosition;

@interface CKDPListRange : PBCodable <NSCopying> {

	CKDPListPosition* _left;
	CKDPListPosition* _right;

}

@property (nonatomic,readonly) BOOL hasLeft; 
@property (nonatomic,retain) CKDPListPosition * left;               //@synthesize left=_left - In the implementation block
@property (nonatomic,readonly) BOOL hasRight; 
@property (nonatomic,retain) CKDPListPosition * right;              //@synthesize right=_right - In the implementation block
-(CKDPListPosition *)left;
-(id)dictionaryRepresentation;
-(CKDPListPosition *)right;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasLeft;
-(void)setLeft:(CKDPListPosition *)arg1 ;
-(id)description;
-(void)setRight:(CKDPListPosition *)arg1 ;
-(unsigned long long)hash;
-(void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasRight;
@end

