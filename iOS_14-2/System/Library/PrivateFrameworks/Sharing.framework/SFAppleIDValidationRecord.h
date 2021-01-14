/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <Sharing/Sharing-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDate, NSArray, NSNumber;

@interface SFAppleIDValidationRecord : NSObject <NSSecureCoding> {

	NSString* _altDSID;
	NSData* _data;
	NSString* _identifier;
	NSDate* _nextCheckDate;
	unsigned long long _suggestedValidDuration;
	NSArray* _validatedEmailHashes;
	NSArray* _validatedPhoneHashes;
	NSDate* _validStartDate;
	NSNumber* _version;

}

@property (nonatomic,retain) NSString * altDSID;                                     //@synthesize altDSID=_altDSID - In the implementation block
@property (nonatomic,retain) NSData * data;                                          //@synthesize data=_data - In the implementation block
@property (nonatomic,retain) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isInvalid; 
@property (nonatomic,readonly) BOOL needsUpdate; 
@property (nonatomic,retain) NSDate * nextCheckDate;                                 //@synthesize nextCheckDate=_nextCheckDate - In the implementation block
@property (assign,nonatomic) unsigned long long suggestedValidDuration;              //@synthesize suggestedValidDuration=_suggestedValidDuration - In the implementation block
@property (nonatomic,retain) NSArray * validatedEmailHashes;                         //@synthesize validatedEmailHashes=_validatedEmailHashes - In the implementation block
@property (nonatomic,retain) NSArray * validatedPhoneHashes;                         //@synthesize validatedPhoneHashes=_validatedPhoneHashes - In the implementation block
@property (nonatomic,retain) NSDate * validStartDate;                                //@synthesize validStartDate=_validStartDate - In the implementation block
@property (nonatomic,retain) NSNumber * version;                                     //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)needsUpdate;
-(BOOL)isInvalid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setData:(NSData *)arg1 ;
-(id)description;
-(NSString *)altDSID;
-(NSDate *)validStartDate;
-(void)setAltDSID:(NSString *)arg1 ;
-(id)expirationDate;
-(NSData *)data;
-(unsigned long long)suggestedValidDuration;
-(BOOL)isEqualToValidationRecord:(id)arg1 ;
-(NSDate *)nextCheckDate;
-(NSArray *)validatedEmailHashes;
-(NSArray *)validatedPhoneHashes;
-(void)setNextCheckDate:(NSDate *)arg1 ;
-(void)setSuggestedValidDuration:(unsigned long long)arg1 ;
-(void)setValidatedEmailHashes:(NSArray *)arg1 ;
-(void)setValidatedPhoneHashes:(NSArray *)arg1 ;
-(void)setValidStartDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setVersion:(NSNumber *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSNumber *)version;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

