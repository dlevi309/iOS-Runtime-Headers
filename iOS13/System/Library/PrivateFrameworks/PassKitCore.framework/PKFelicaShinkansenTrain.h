/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)departureTime;
-(NSNumber *)arrivalTime;
-(NSNumber *)seatRow;
-(NSNumber *)seatNumber;
-(NSString *)trainName;
-(NSNumber *)carNumber;
-(NSData *)originStation;
-(NSData *)destinationStation;
@end

