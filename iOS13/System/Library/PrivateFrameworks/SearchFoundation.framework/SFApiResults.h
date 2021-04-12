/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(int)status;
-(int)resultType;
-(void)setResultType:(int)arg1;
-(void)setStatus:(int)arg1;
-(NSData *)jsonData;
-(NSArray *)flights;
-(void)setFlights:(id)arg1;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDictionary, NSData, NSString;

@interface SFApiResults : NSObject <SFApiResults, NSSecureCoding, NSCopying> {

	SCD_Struct_SF10 _has;
	int _status;
	int _resultType;
	NSArray* _flights;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int status;                                             //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) int resultType;                                         //@synthesize resultType=_resultType - In the implementation block
@property (nonatomic,copy) NSArray * flights;                                        //@synthesize flights=_flights - In the implementation block
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSData * jsonData; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(int)status;
-(int)resultType;
-(void)setResultType:(int)arg1 ;
-(void)setStatus:(int)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasResultType;
-(id)initWithProtobuf:(id)arg1 ;
-(NSData *)jsonData;
-(NSArray *)flights;
-(void)setFlights:(NSArray *)arg1 ;
@end

