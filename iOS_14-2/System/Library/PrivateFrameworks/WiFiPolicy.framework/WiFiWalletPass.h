/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WiFiCandidateNetwork.h>

@protocol TBScore;
@class NSString, NSSet, NSDate;

@interface WiFiWalletPass : NSObject <WiFiCandidateNetwork> {

	BOOL matched;
	unsigned venueType;
	NSString* SSID;
	NSString* password;
	NSSet* attributes;
	NSSet* accessPoints;
	id<TBScore> qualityScore;
	id<TBScore> popularityScore;
	unsigned long long venueGroup;
	unsigned long long type;
	NSString* _uniqueIdentifier;
	NSString* _serialNumber;
	NSDate* _relevantDate;
	NSString* _localizedDescription;

}

@property (nonatomic,copy) NSString * uniqueIdentifier;                    //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,copy) NSString * serialNumber;                        //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,copy) NSDate * relevantDate;                          //@synthesize relevantDate=_relevantDate - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;                //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,copy) NSString * SSID; 
@property (nonatomic,copy) NSString * password; 
@property (nonatomic,readonly) NSSet * accessPoints; 
@property (nonatomic,readonly) long long source; 
@property (nonatomic,readonly) NSSet * attributes; 
@property (assign,nonatomic) BOOL matched; 
@property (nonatomic,readonly) unsigned long long type; 
@property (nonatomic,readonly) unsigned long long venueGroup; 
@property (nonatomic,readonly) unsigned venueType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<TBScore> popularityScore; 
@property (nonatomic,readonly) id<TBScore> qualityScore; 
-(NSString *)SSID;
-(void)setSSID:(NSString *)arg1 ;
-(void)setUniqueIdentifier:(NSString *)arg1 ;
-(NSString *)serialNumber;
-(unsigned long long)venueGroup;
-(NSString *)uniqueIdentifier;
-(NSString *)password;
-(NSSet *)attributes;
-(NSString *)description;
-(NSString *)localizedDescription;
-(void)setPassword:(NSString *)arg1 ;
-(unsigned long long)type;
-(id<TBScore>)qualityScore;
-(unsigned)venueType;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(BOOL)matched;
-(void)setRelevantDate:(NSDate *)arg1 ;
-(void)setSerialNumber:(NSString *)arg1 ;
-(NSSet *)accessPoints;
-(NSDate *)relevantDate;
-(long long)source;
-(void)setMatched:(BOOL)arg1 ;
-(id<TBScore>)popularityScore;
-(BOOL)containsAccessPointMatchingBSSIDs:(id)arg1 ;
@end

