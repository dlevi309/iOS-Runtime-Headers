/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(NSDictionary *)features;
-(NSString *)utsk;
-(id)utsc;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDictionary *)responseDictionary;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(BOOL)isValid;
-(NSDate *)expirationDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)vppaStatus;
-(NSString *)vppaStatusString;
-(NSNumber *)vppaSessionDurationInMillis;
-(BOOL)isActiveUser;
-(id)initWithServerResponseDictionary:(id)arg1 expirationDate:(id)arg2 environmentHash:(unsigned long long)arg3 ;
-(NSDictionary *)requiredRequestKeyValuePairsDictionary;
-(unsigned long long)environmentHash;
-(NSURL *)playActivityURL;
-(BOOL)isValidIgnoringExpiration;
-(NSDictionary *)endpointsDictionary;
@end

