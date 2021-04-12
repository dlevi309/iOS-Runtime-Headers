/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, NSString;

@interface NTPBPurchaseIDPatternPair : PBCodable <NSCopying> {

	NSMutableArray* _domainPatterns;
	NSString* _purchaseID;

}

@property (nonatomic,retain) NSString * purchaseID;                        //@synthesize purchaseID=_purchaseID - In the implementation block
@property (nonatomic,retain) NSMutableArray * domainPatterns;              //@synthesize domainPatterns=_domainPatterns - In the implementation block
+(Class)domainPatternType;
-(id)dictionaryRepresentation;
-(void)setPurchaseID:(NSString *)arg1 ;
-(NSMutableArray *)domainPatterns;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)purchaseID;
-(id)description;
-(void)addDomainPattern:(id)arg1 ;
-(void)clearDomainPatterns;
-(unsigned long long)domainPatternsCount;
-(id)domainPatternAtIndex:(unsigned long long)arg1 ;
-(void)setDomainPatterns:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

