/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSNumber, NSDictionary;

@interface WLKEvent : NSObject <NSSecureCoding> {

	NSString* _canonicalID;
	NSString* _legID;
	NSString* _externalPlayableID;
	NSString* _channelID;
	NSString* _serviceID;
	NSString* _externalServiceID;
	unsigned long long _airingType;
	NSString* _airingTypeString;
	NSDate* _canonicalStartDate;
	NSDate* _startDate;
	NSDate* _endDate;
	NSNumber* _cleanupTime;
	NSDictionary* _dictionary;

}

@property (nonatomic,readonly) NSDictionary * dictionary;                  //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) NSString * canonicalID;                     //@synthesize canonicalID=_canonicalID - In the implementation block
@property (nonatomic,readonly) NSString * legID;                           //@synthesize legID=_legID - In the implementation block
@property (nonatomic,readonly) NSString * externalPlayableID;              //@synthesize externalPlayableID=_externalPlayableID - In the implementation block
@property (nonatomic,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,readonly) NSString * serviceID;                       //@synthesize serviceID=_serviceID - In the implementation block
@property (nonatomic,readonly) NSString * externalServiceID;               //@synthesize externalServiceID=_externalServiceID - In the implementation block
@property (nonatomic,readonly) unsigned long long airingType;              //@synthesize airingType=_airingType - In the implementation block
@property (nonatomic,readonly) NSString * airingTypeString;                //@synthesize airingTypeString=_airingTypeString - In the implementation block
@property (nonatomic,readonly) NSDate * canonicalStartDate;                //@synthesize canonicalStartDate=_canonicalStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) NSNumber * cleanupTime;                     //@synthesize cleanupTime=_cleanupTime - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)dictionary;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(NSString *)serviceID;
-(NSString *)channelID;
-(NSString *)canonicalID;
-(NSString *)externalServiceID;
-(unsigned long long)airingType;
-(NSString *)externalPlayableID;
-(NSNumber *)cleanupTime;
-(NSString *)legID;
-(NSString *)airingTypeString;
-(NSDate *)canonicalStartDate;
@end

