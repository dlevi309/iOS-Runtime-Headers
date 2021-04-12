/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDate *)startDate;
-(PKPassField *)title;
-(void)setTitle:(PKPassField *)arg1 ;
-(void)setUsage:(PKPassField *)arg1 ;
-(unsigned long long)properties;
-(PKPassField *)usage;
-(void)setStartDate:(NSDate *)arg1 ;
-(void)setProperties:(unsigned long long)arg1 ;
-(NSArray *)details;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(void)setDetails:(NSArray *)arg1 ;
-(void)_updateFieldsByKey;
-(void)_updateProperties;
-(void)setDeviceAccountIdentifiers:(NSArray *)arg1 ;
-(id)_expiryField;
-(id)_startField;
-(id)passFieldForKey:(id)arg1 ;
-(BOOL)isPlanAvailable;
-(NSString *)expiryDateString;
-(NSString *)startDateString;
-(NSArray *)deviceAccountIdentifiers;
-(void)setStartDateString:(NSString *)arg1 ;
-(void)setExpiryDateString:(NSString *)arg1 ;
@end

