/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
*/

#import <WatchListKit/WatchListKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSDate, NSString, NSURL, NSNumber;

@interface WLKServerConfigurationResponse : NSObject <NSSecureCoding, NSCopying> {

	NSDictionary* _responseDictionary;
	NSDate* _expirationDate;
	unsigned long long _environmentHash;
	NSDictionary* _endpointsDictionary;

}

@property (nonatomic,readonly) NSDictionary * responseDictionary;                                  //@synthesize responseDictionary=_responseDictionary - In the implementation block
@property (nonatomic,readonly) NSDate * expirationDate;                                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (nonatomic,readonly) unsigned long long environmentHash;                                 //@synthesize environmentHash=_environmentHash - In the implementation block
@property (nonatomic,readonly) NSDictionary * endpointsDictionary;                                 //@synthesize endpointsDictionary=_endpointsDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * requiredRequestKeyValuePairsDictionary; 
@property (nonatomic,readonly) NSString * vppaStatusString; 
@property (nonatomic,readonly) long long vppaStatus; 
@property (nonatomic,readonly) NSURL * playActivityURL; 
@property (nonatomic,readonly) NSDictionary * features; 
@property (nonatomic,copy,readonly) NSString * utsk; 
@property (getter=isActiveUser,nonatomic,readonly) BOOL activeUser; 
@property (nonatomic,copy,readonly) NSNumber * vppaSessionDurationInMillis; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isValid;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(NSDate *)expirationDate;
-(NSDictionary *)features;
-(NSDictionary *)responseDictionary;
-(NSString *)utsk;
-(long long)vppaStatus;
-(NSString *)vppaStatusString;
-(NSNumber *)vppaSessionDurationInMillis;
-(id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 ;
-(NSDictionary *)requiredRequestKeyValuePairsDictionary;
-(unsigned long long)environmentHash;
-(NSURL *)playActivityURL;
-(BOOL)isActiveUser;
-(BOOL)isValidIgnoringExpiration;
-(id)utsc;
-(NSDictionary *)endpointsDictionary;
@end

