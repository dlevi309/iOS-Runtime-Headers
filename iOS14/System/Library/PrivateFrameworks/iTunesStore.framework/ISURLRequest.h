/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/iTunesStore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSLock, SSMutableURLRequestProperties, NSString, NSData, NSInputStream, NSDictionary, NSURL, NSArray;

@interface ISURLRequest : NSObject <NSSecureCoding, NSCopying> {

	NSLock* _lock;
	SSMutableURLRequestProperties* _properties;

}

@property (retain) NSString * appleClientApplication; 
@property (retain) NSData * HTTPBody; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (retain) NSString * HTTPMethod; 
@property (retain) NSDictionary * queryStringDictionary; 
@property (readonly) NSURL * primaryURL; 
@property (retain) NSArray * URLs; 
@property (assign) long long allowedRetryCount; 
@property (assign) double timeoutInterval; 
@property (assign) unsigned long long cachePolicy; 
@property (retain) NSDictionary * customHeaders; 
@property (assign) long long URLBagType; 
@property (assign) long long expectedContentLength; 
+(BOOL)supportsSecureCoding;
+(id)requestWithURL:(id)arg1 ;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(NSString *)HTTPMethod;
-(id)_initCommon;
-(long long)URLBagType;
-(id)init;
-(NSInputStream *)HTTPBodyStream;
-(id)initWithURL:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURLRequest:(id)arg1 ;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(double)timeoutInterval;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(NSArray *)URLs;
-(unsigned long long)cachePolicy;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(id)requestProperties;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)HTTPBody;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(id)initWithRequestProperties:(id)arg1 ;
-(void)setExpectedContentLength:(long long)arg1 ;
-(long long)expectedContentLength;
-(void)setURLBagType:(long long)arg1 ;
-(long long)allowedRetryCount;
-(NSString *)appleClientApplication;
-(void)setURLs:(NSArray *)arg1 ;
-(NSDictionary *)customHeaders;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSDictionary *)queryStringDictionary;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(NSURL *)primaryURL;
-(void)setQueryStringDictionary:(NSDictionary *)arg1 ;
-(void)setValue:(id)arg1 forQueryStringParameter:(id)arg2 ;
@end

