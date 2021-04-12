/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface CKCDPCodeServiceRequestAssetAuthorizeGetRequestOptions : PBCodable <NSCopying> {

	unsigned long long _contentRequestAuthorizeGetOptions;
	NSMutableArray* _contentRequestHeaders;
	SCD_Struct_CK1 _has;

}

@property (nonatomic,retain) NSMutableArray * contentRequestHeaders;                            //@synthesize contentRequestHeaders=_contentRequestHeaders - In the implementation block
@property (assign,nonatomic) BOOL hasContentRequestAuthorizeGetOptions; 
@property (assign,nonatomic) unsigned long long contentRequestAuthorizeGetOptions;              //@synthesize contentRequestAuthorizeGetOptions=_contentRequestAuthorizeGetOptions - In the implementation block
+(Class)contentRequestHeadersType;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
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

