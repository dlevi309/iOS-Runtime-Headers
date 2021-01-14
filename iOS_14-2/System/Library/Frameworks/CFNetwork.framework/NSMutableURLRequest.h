/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <CFNetwork/NSURLRequest.h>

@class NSString, NSDictionary, NSData, NSInputStream, NSURL;

@interface NSMutableURLRequest : NSURLRequest

@property (copy) NSString * HTTPMethod; 
@property (copy) NSDictionary * allHTTPHeaderFields; 
@property (copy) NSData * HTTPBody; 
@property (retain) NSInputStream * HTTPBodyStream; 
@property (assign) BOOL HTTPShouldHandleCookies; 
@property (assign) BOOL HTTPShouldUsePipelining; 
@property (getter=isKnownHTTP3Capable) BOOL knownHTTP3Capable; 
@property (copy) NSURL * URL; 
@property (assign) unsigned long long cachePolicy; 
@property (assign) double timeoutInterval; 
@property (copy) NSURL * mainDocumentURL; 
@property (assign) unsigned long long networkServiceType; 
@property (assign) BOOL allowsCellularAccess; 
@property (assign) BOOL allowsExpensiveNetworkAccess; 
@property (assign) BOOL allowsConstrainedNetworkAccess; 
-(void)bindToCommand:(_CNPluginCommand*)arg1 ;
-(void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setAllowsConstrainedNetworkAccess:(BOOL)arg1 ;
-(void)setContentDispositionEncodingFallbackArray:(id)arg1 ;
-(void)addValue:(id)arg1 forHTTPHeaderField:(id)arg2 ;
-(void)setAllowsExpensiveNetworkAccess:(BOOL)arg1 ;
-(void)_setRequiresShortConnectionTimeout:(BOOL)arg1 ;
-(void)setBoundInterfaceIdentifier:(id)arg1 ;
-(void)setHTTPUserAgent:(id)arg1 ;
-(unsigned long long)requestPriority;
-(void)_setIgnoreHSTS:(BOOL)arg1 ;
-(void)setHTTPShouldHandleCookies:(BOOL)arg1 ;
-(void)setHTTPShouldUsePipelining:(BOOL)arg1 ;
-(void)setKnownHTTP3Capable:(BOOL)arg1 ;
-(void)_setStartTimeoutDate:(id)arg1 ;
-(void)_setPayloadTransmissionTimeout:(double)arg1 ;
-(void)setMainDocumentURL:(NSURL *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)setHTTPReferrer:(id)arg1 ;
-(void)setHTTPExtraCookies:(id)arg1 ;
-(void)setAllHTTPHeaderFields:(NSDictionary *)arg1 ;
-(void)setExpectedWorkload:(unsigned long long)arg1 ;
-(void)_setTimeWindowDelay:(double)arg1 ;
-(void)setHTTPContentType:(id)arg1 ;
-(void)setRequestPriority:(unsigned long long)arg1 ;
-(void)_setTimeWindowDuration:(double)arg1 ;
-(void)_setPreventHSTSStorage:(BOOL)arg1 ;
-(void)setAllowsCellularAccess:(BOOL)arg1 ;
-(void)setHTTPBodyStream:(NSInputStream *)arg1 ;
-(void)setTimeoutInterval:(double)arg1 ;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(void)setHTTPBody:(NSData *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

