/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)recoAlgoId;
-(BOOL)isEqual:(id)arg1 ;
-(void)setImpressionType:(NSString *)arg1 ;
-(void)setRecoAlgoId:(NSString *)arg1 ;
-(BOOL)hasImpressionType;
-(BOOL)hasRecoAlgoId;
-(NSString *)impressionType;
@end

