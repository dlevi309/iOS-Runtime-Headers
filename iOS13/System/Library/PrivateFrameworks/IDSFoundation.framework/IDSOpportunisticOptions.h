/*
* Generated on Monday, March 1, 2021 at 2:30:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(NSArray *)blacklistedDestinations;
-(id)initWithBlacklistedDestinations:(id)arg1 expiryDate:(id)arg2 destinationsMustBeInContacts:(BOOL)arg3 ;
-(BOOL)destinationsMustBeInContacts;
-(void)setBlacklistedDestinations:(NSArray *)arg1 ;
-(void)setDestinationsMustBeInContacts:(BOOL)arg1 ;
@end

