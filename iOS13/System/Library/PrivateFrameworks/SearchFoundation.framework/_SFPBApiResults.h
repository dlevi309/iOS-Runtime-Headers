/*
* Generated on Monday, March 1, 2021 at 2:30:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithDictionary:(id)arg1;
-(int)status;
-(int)resultType;
-(void)setResultType:(int)arg1;
-(void)setStatus:(int)arg1;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1;
-(void)addFlights:(id)arg1;
-(NSArray *)flights;
-(void)clearFlights;
-(unsigned long long)flightsCount;
-(id)flightsAtIndex:(unsigned long long)arg1;
-(void)setFlights:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSData, NSString;

@interface _SFPBApiResults : PBCodable <_SFPBApiResults, NSSecureCoding> {

	int _status;
	int _resultType;
	NSArray* _flights;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int status;                            //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int resultType;                        //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSArray * flights;                       //@synthesize flights=_flights - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(int)status;
-(int)resultType;
-(void)writeTo:(id)arg1 ;
-(void)setResultType:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
-(id)initWithJSON:(id)arg1 ;
-(void)addFlights:(id)arg1 ;
-(NSArray *)flights;
-(void)clearFlights;
-(unsigned long long)flightsCount;
-(id)flightsAtIndex:(unsigned long long)arg1 ;
-(void)setFlights:(NSArray *)arg1 ;
@end

