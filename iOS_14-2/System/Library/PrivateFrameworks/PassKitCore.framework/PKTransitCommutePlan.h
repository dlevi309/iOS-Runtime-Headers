/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, NSString, NSArray, PKPassField, NSDate;

@interface PKTransitCommutePlan : NSObject <NSSecureCoding, NSCopying> {

	NSMutableDictionary* _fieldsByKey;
	NSString* _identifier;
	NSArray* _deviceAccountIdentifiers;
	PKPassField* _title;
	NSArray* _details;
	unsigned long long _properties;
	NSDate* _startDate;
	NSDate* _expiryDate;
	NSString* _startDateString;
	NSString* _expiryDateString;
	PKPassField* _usage;

}

@property (nonatomic,copy) NSString * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSArray * deviceAccountIdentifiers;              //@synthesize deviceAccountIdentifiers=_deviceAccountIdentifiers - In the implementation block
@property (nonatomic,copy) PKPassField * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * details;                               //@synthesize details=_details - In the implementation block
@property (assign,nonatomic) unsigned long long properties;                 //@synthesize properties=_properties - In the implementation block
@property (nonatomic,copy) NSDate * startDate;                              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,copy) NSDate * expiryDate;                             //@synthesize expiryDate=_expiryDate - In the implementation block
@property (nonatomic,copy) NSString * startDateString;                      //@synthesize startDateString=_startDateString - In the implementation block
@property (nonatomic,copy) NSString * expiryDateString;                     //@synthesize expiryDateString=_expiryDateString - In the implementation block
@property (nonatomic,copy) PKPassField * usage;                             //@synthesize usage=_usage - In the implementation block
@property (nonatomic,readonly) BOOL isPlanAvailable; 
@property (nonatomic,readonly) BOOL isPlanDisplayable; 
@property (nonatomic,readonly) BOOL hasDisplayableInformation; 
+(BOOL)supportsSecureCoding;
-(void)setDetails:(NSArray *)arg1 ;
-(PKPassField *)usage;
-(unsigned long long)properties;
-(id)passFieldForKey:(id)arg1 ;
-(id)_startField;
-(BOOL)isPlanAvailable;
-(void)_updateFieldsByKey;
-(void)setStartDate:(NSDate *)arg1 ;
-(BOOL)isPlanDisplayable;
-(BOOL)hasDisplayableInformation;
-(void)setDeviceAccountIdentifiers:(NSArray *)arg1 ;
-(NSString *)expiryDateString;
-(NSString *)startDateString;
-(void)setStartDateString:(NSString *)arg1 ;
-(NSArray *)deviceAccountIdentifiers;
-(void)setExpiryDateString:(NSString *)arg1 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setTitle:(PKPassField *)arg1 ;
-(NSDate *)expiryDate;
-(unsigned long long)hash;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(void)setUsage:(PKPassField *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)details;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(PKPassField *)title;
-(BOOL)isEqual:(id)arg1 ;
-(id)_expiryField;
-(void)_updateProperties;
@end

