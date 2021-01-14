/*
* Generated on Thursday, January 14, 2021 at 2:22:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBApiResults.h>
@class NSArray, NSData;


@protocol _SFPBApiResults <NSObject>
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int resultType; 
@property (nonatomic,copy) NSArray * flights; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setResultType:(int)arg1;
-(NSData *)jsonData;
-(int)resultType;
-(void)addFlights:(id)arg1;
-(void)clearFlights;
-(unsigned long long)flightsCount;
-(id)flightsAtIndex:(unsigned long long)arg1;
-(void)setFlights:(id)arg1;
-(id)initWithDictionary:(id)arg1;
-(NSArray *)flights;
-(void)setStatus:(int)arg1;
-(id)initWithJSON:(id)arg1;
-(int)status;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding> {

	int _status;
	int _resultType;
	NSArray* _flights;

}

@property (assign,nonatomic) int status;                            //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int resultType;                        //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSArray * flights;                       //@synthesize flights=_flights - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)dictionaryRepresentation;
-(void)setResultType:(int)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(int)resultType;
-(void)addFlights:(id)arg1 ;
-(void)clearFlights;
-(unsigned long long)flightsCount;
-(id)flightsAtIndex:(unsigned long long)arg1 ;
-(void)setFlights:(NSArray *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSArray *)flights;
-(unsigned long long)hash;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(void)writeTo:(id)arg1 ;
-(id)initWithJSON:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(int)status;
@end

