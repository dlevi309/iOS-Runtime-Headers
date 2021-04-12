/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ICIAMImpressionNode : PBCodable <NSCopying> {

	NSString* _impressionType;
	NSString* _recoAlgoId;

}

@property (nonatomic,readonly) BOOL hasImpressionType; 
@property (nonatomic,retain) NSString * impressionType;              //@synthesize impressionType=_impressionType - In the implementation block
@property (nonatomic,readonly) BOOL hasRecoAlgoId; 
@property (nonatomic,retain) NSString * recoAlgoId;                  //@synthesize recoAlgoId=_recoAlgoId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setImpressionType:(NSString *)arg1 ;
-(void)setRecoAlgoId:(NSString *)arg1 ;
-(BOOL)hasImpressionType;
-(BOOL)hasRecoAlgoId;
-(NSString *)impressionType;
-(NSString *)recoAlgoId;
@end

