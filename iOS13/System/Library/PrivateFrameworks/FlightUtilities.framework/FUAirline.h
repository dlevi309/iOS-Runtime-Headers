/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FlightUtilities.framework/FlightUtilities
*/

#import <FlightUtilities/FlightUtilities-Structs.h>
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)phoneNumber;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)IATACode;
-(NSString *)FAACode;
-(void)setIATACode:(NSString *)arg1 ;
-(void)setFAACode:(NSString *)arg1 ;
@end

