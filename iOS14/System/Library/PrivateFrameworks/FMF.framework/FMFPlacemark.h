/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface FMFPlacemark : NSObject <NSCopying, NSSecureCoding> {

	NSString* _locality;
	NSString* _administrativeArea;
	NSString* _country;
	NSString* _state;
	NSString* _streetAddress;
	NSString* _streetName;
	NSArray* _formattedAddressLines;

}

@property (nonatomic,retain) NSArray * formattedAddressLines;              //@synthesize formattedAddressLines=_formattedAddressLines - In the implementation block
@property (nonatomic,retain) NSString * locality;                          //@synthesize locality=_locality - In the implementation block
@property (nonatomic,retain) NSString * administrativeArea;                //@synthesize administrativeArea=_administrativeArea - In the implementation block
@property (nonatomic,retain) NSString * country;                           //@synthesize country=_country - In the implementation block
@property (nonatomic,retain) NSString * state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * streetAddress;                     //@synthesize streetAddress=_streetAddress - In the implementation block
@property (nonatomic,retain) NSString * streetName;                        //@synthesize streetName=_streetName - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setLocality:(NSString *)arg1 ;
-(NSString *)country;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)streetAddress;
-(void)setStreetAddress:(NSString *)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)locality;
-(NSString *)streetName;
-(void)setStreetName:(NSString *)arg1 ;
-(void)setState:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)state;
-(void)setAdministrativeArea:(NSString *)arg1 ;
-(void)setFormattedAddressLines:(NSArray *)arg1 ;
-(NSArray *)formattedAddressLines;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)administrativeArea;
-(BOOL)isEqual:(id)arg1 ;
-(id)formattedAddress;
-(id)initWithLocality:(id)arg1 administrativeArea:(id)arg2 country:(id)arg3 state:(id)arg4 streetAddress:(id)arg5 streetName:(id)arg6 ;
@end

