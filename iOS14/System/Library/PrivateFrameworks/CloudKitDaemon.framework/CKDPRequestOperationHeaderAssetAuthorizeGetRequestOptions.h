/*
* Generated on Thursday, January 14, 2021 at 2:26:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKDPRequestOperationHeaderAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {

	unsigned long long _contentRequestAuthorizeGetOptions;
	NSMutableArray* _contentRequestHeaders;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * contentRequestHeaders;                            //@synthesize contentRequestHeaders=_contentRequestHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasContentRequestAuthorizeGetOptions; 
@property (assign,nonatomic) unsigned long long contentRequestAuthorizeGetOptions;              //@synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions - In the implementation block
+(Class)contentRequestHeadersType;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setContentRequestAuthorizeGetOptions:(unsigned long long)arg1 ;
-(void)setContentRequestHeaders:(NSMutableArray *)arg1 ;
-(NSMutableArray *)contentRequestHeaders;
-(void)addContentRequestHeaders:(id)arg1 ;
-(unsigned long long)contentRequestHeadersCount;
-(void)clearContentRequestHeaders;
-(id)contentRequestHeadersAtIndex:(unsigned long long)arg1 ;
-(void)setHasContentRequestAuthorizeGetOptions:(BOOL)arg1 ;
-(BOOL)hasContentRequestAuthorizeGetOptions;
-(unsigned long long)contentRequestAuthorizeGetOptions;
@end

