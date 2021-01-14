/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber, NSString;

@interface PKFelicaShinkansenTrain : NSObject <NSSecureCoding> {

	NSData* _originStation;
	NSData* _destinationStation;
	NSNumber* _departureTime;
	NSNumber* _arrivalTime;
	NSString* _trainName;
	NSNumber* _carNumber;
	NSNumber* _seatRow;
	NSNumber* _seatNumber;

}

@property (nonatomic,copy,readonly) NSData * originStation;                   //@synthesize originStation=_originStation - In the implementation block
@property (nonatomic,copy,readonly) NSData * destinationStation;              //@synthesize destinationStation=_destinationStation - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * departureTime;                 //@synthesize departureTime=_departureTime - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * arrivalTime;                   //@synthesize arrivalTime=_arrivalTime - In the implementation block
@property (nonatomic,copy,readonly) NSString * trainName;                     //@synthesize trainName=_trainName - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * carNumber;                     //@synthesize carNumber=_carNumber - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seatRow;                       //@synthesize seatRow=_seatRow - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * seatNumber;                    //@synthesize seatNumber=_seatNumber - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSNumber *)seatRow;
-(NSNumber *)arrivalTime;
-(NSNumber *)departureTime;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)carNumber;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)trainName;
-(NSData *)originStation;
-(NSData *)destinationStation;
-(NSNumber *)seatNumber;
@end

