/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSNumber;

@interface PKFelicaGreenCarTicket : NSObject <NSSecureCoding> {

	BOOL _refunded;
	NSData* _originStation;
	NSData* _destinationStation;
	NSNumber* _validityStartDate;

}

@property (nonatomic,copy,readonly) NSData * originStation;                    //@synthesize originStation=_originStation - In the implementation block
@property (nonatomic,copy,readonly) NSData * destinationStation;               //@synthesize destinationStation=_destinationStation - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * validityStartDate;              //@synthesize validityStartDate=_validityStartDate - In the implementation block
@property (getter=isRefunded,nonatomic,readonly) BOOL refunded;                //@synthesize refunded=_refunded - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSNumber *)validityStartDate;
-(NSData *)originStation;
-(NSData *)destinationStation;
-(BOOL)isRefunded;
@end

