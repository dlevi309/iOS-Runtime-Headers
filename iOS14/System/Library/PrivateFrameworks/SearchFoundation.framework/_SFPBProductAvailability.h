/*
* Generated on Thursday, January 14, 2021 at 2:22:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBProductAvailability.h>
@class NSArray, NSData;


@protocol _SFPBProductAvailability <NSObject>
@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setResults:(id)arg1;
-(NSArray *)results;
-(NSData *)jsonData;
-(void)clearResults;
-(id)initWithDictionary:(id)arg1;
-(void)addResults:(id)arg1;
-(unsigned long long)resultsCount;
-(id)resultsAtIndex:(unsigned long long)arg1;
-(id)initWithJSON:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBProductAvailability : PBCodable <_SFPBProductAvailability, NSSecureCoding> {

	NSArray* _results;

}

@property (nonatomic,copy) NSArray * results;                       //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResults:(NSArray *)arg1 ;
-(id)dictionaryRepresentation;
-(NSArray *)results;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(void)clearResults;
-(id)initWithDictionary:(id)arg1 ;
-(void)addResults:(id)arg1 ;
-(unsigned long long)resultsCount;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)resultsAtIndex:(unsigned long long)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

