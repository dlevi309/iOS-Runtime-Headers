/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(void)setData:(NSData *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSNumber *)version;
-(void)setVersion:(NSNumber *)arg1 ;
-(id)expirationDate;
-(BOOL)needsUpdate;
-(NSString *)altDSID;
-(void)setAltDSID:(NSString *)arg1 ;
-(BOOL)isInvalid;
-(NSDate *)validStartDate;
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
@end

