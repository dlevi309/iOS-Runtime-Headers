/*
* Generated on Thursday, January 14, 2021 at 2:27:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilitiesCore.framework/FlightUtilitiesCore
*/

#import <FlightUtilitiesCore/FlightUtilitiesCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL;

@interface FUAirline : NSObject <NSCopying, NSSecureCoding> {

	NSString* _IATACode;
	NSString* _FAACode;
	NSString* _name;
	NSString* _phoneNumber;
	NSURL* _URL;

}

@property (retain) NSString * IATACode;                 //@synthesize IATACode=_IATACode - In the implementation block
@property (retain) NSString * FAACode;                  //@synthesize FAACode=_FAACode - In the implementation block
@property (retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (retain) NSString * phoneNumber;              //@synthesize phoneNumber=_phoneNumber - In the implementation block
@property (retain) NSURL * URL;                         //@synthesize URL=_URL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setURL:(NSURL *)arg1 ;
-(NSString *)phoneNumber;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSURL *)URL;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)FAACode;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)IATACode;
-(void)setIATACode:(NSString *)arg1 ;
-(void)setFAACode:(NSString *)arg1 ;
@end

