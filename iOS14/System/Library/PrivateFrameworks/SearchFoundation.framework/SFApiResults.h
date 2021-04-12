/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <libobjc.A.dylib/SFApiResults.h>
@class NSArray, NSDictionary, NSData;


@protocol SFApiResults <NSObject>
@property (assign,nonatomic) int status; 
@property (assign,nonatomic) int resultType; 
@property (nonatomic,copy) NSArray * flights; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(NSDictionary *)dictionaryRepresentation;
-(void)setResultType:(int)arg1;
-(NSData *)jsonData;
-(int)resultType;
-(void)setFlights:(id)arg1;
-(NSArray *)flights;
-(void)setStatus:(int)arg1;
-(int)status;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFApiResults : NSObject <SFApiResults, NSSecureCoding, NSCopying> {

	SCD_Struct_SF9 _has;
	int _status;
	int _resultType;
	NSArray* _flights;

}

@property (assign,nonatomic) int status;                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int resultType;                                         //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSArray * flights;                                        //@synthesize flights=_flights - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(void)setResultType:(int)arg1 ;
-(NSData *)jsonData;
-(void)encodeWithCoder:(id)arg1 ;
-(int)resultType;
-(void)setFlights:(NSArray *)arg1 ;
-(BOOL)hasStatus;
-(NSArray *)flights;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setStatus:(int)arg1 ;
-(BOOL)hasResultType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)status;
@end

