/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface NTPBAlternateUniversalLinksResource : PBCodable <NSCopying> {

	NSMutableArray* _otherPatterns;
	NSMutableArray* _patternJSONPairs;
	NSMutableArray* _purchaseIDPatternPairs;

}

@property (nonatomic,retain) NSMutableArray * purchaseIDPatternPairs;              //@synthesize purchaseIDPatternPairs=_purchaseIDPatternPairs - In the implementation block
@property (nonatomic,retain) NSMutableArray * otherPatterns;                       //@synthesize otherPatterns=_otherPatterns - In the implementation block
@property (nonatomic,retain) NSMutableArray * patternJSONPairs;                    //@synthesize patternJSONPairs=_patternJSONPairs - In the implementation block
+(Class)purchaseIDPatternPairsType;
+(Class)otherPatternsType;
+(Class)patternJSONPairsType;
-(id)dictionaryRepresentation;
-(void)setPurchaseIDPatternPairs:(NSMutableArray *)arg1 ;
-(void)addPatternJSONPairs:(id)arg1 ;
-(void)addOtherPatterns:(id)arg1 ;
-(unsigned long long)otherPatternsCount;
-(void)mergeFrom:(id)arg1 ;
-(id)purchaseIDPatternPairsAtIndex:(unsigned long long)arg1 ;
-(id)otherPatternsAtIndex:(unsigned long long)arg1 ;
-(void)clearOtherPatterns;
-(void)setOtherPatterns:(NSMutableArray *)arg1 ;
-(id)description;
-(NSMutableArray *)patternJSONPairs;
-(void)addPurchaseIDPatternPairs:(id)arg1 ;
-(void)setPatternJSONPairs:(NSMutableArray *)arg1 ;
-(unsigned long long)hash;
-(NSMutableArray *)otherPatterns;
-(void)clearPatternJSONPairs;
-(id)patternJSONPairsAtIndex:(unsigned long long)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(NSMutableArray *)purchaseIDPatternPairs;
-(void)clearPurchaseIDPatternPairs;
-(void)writeTo:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)purchaseIDPatternPairsCount;
-(unsigned long long)patternJSONPairsCount;
@end

