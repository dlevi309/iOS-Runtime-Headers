/*
* Generated on Thursday, January 14, 2021 at 2:22:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSDictionary;

@interface IDSOpportunisticOptions : NSObject <NSSecureCoding> {

	NSArray* _blacklistedDestinations;
	NSDate* _expiryDate;
	BOOL _destinationsMustBeInContacts;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,retain) NSArray * blacklistedDestinations;                      //@synthesize blacklistedDestinations=_blacklistedDestinations - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                                    //@synthesize expiryDate=_expiryDate - In the implementation block
@property (assign,nonatomic) BOOL destinationsMustBeInContacts;                      //@synthesize destinationsMustBeInContacts=_destinationsMustBeInContacts - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)dictionaryRepresentation;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSArray *)blacklistedDestinations;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)destinationsMustBeInContacts;
-(id)initWithBlacklistedDestinations:(id)arg1 expiryDate:(id)arg2 destinationsMustBeInContacts:(BOOL)arg3 ;
-(void)setBlacklistedDestinations:(NSArray *)arg1 ;
-(void)setDestinationsMustBeInContacts:(BOOL)arg1 ;
@end

