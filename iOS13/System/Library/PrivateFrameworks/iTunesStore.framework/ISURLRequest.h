/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURLs:(NSArray *)arg1 ;
-(NSArray *)URLs;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(NSData *)HTTPBody;
-(NSInputStream *)HTTPBodyStream;
-(long long)expectedContentLength;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(NSString *)HTTPMethod;
-(unsigned long long)cachePolicy;
-(double)timeoutInterval;
-(id)initWithURLRequest:(id)arg1 ;
-(void)setCustomHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)customHeaders;
-(void)setValue:(id)arg1 forHeaderField:(id)arg2 ;
-(void)setAllowedRetryCount:(long long)arg1 ;
-(void)setExpectedContentLength:(long long)arg1 ;
-(id)requestProperties;
-(id)initWithRequestProperties:(id)arg1 ;
-(id)_initCommon;
-(long long)allowedRetryCount;
-(long long)URLBagType;
-(void)setURLBagType:(long long)arg1 ;
-(NSDictionary *)queryStringDictionary;
-(void)setAppleClientApplication:(NSString *)arg1 ;
-(NSString *)appleClientApplication;
-(NSURL *)primaryURL;
-(void)setQueryStringDictionary:(NSDictionary *)arg1 ;
-(void)setValue:(id)arg1 forQueryStringParameter:(id)arg2 ;
@end

