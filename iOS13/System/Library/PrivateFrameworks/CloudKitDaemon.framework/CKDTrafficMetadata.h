/*
* Generated on Monday, March 1, 2021 at 2:33:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSURL, NSString, NSDictionary;

@interface CKDTrafficMetadata : NSObject <NSSecureCoding> {

	BOOL _parsingStandaloneMessage;
	NSDate* _timestamp;
	NSURL* _url;
	NSString* _method;
	long long _status;
	NSDictionary* _headers;
	NSString* _requestClassName;

}

@property (nonatomic,retain) NSDate * timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,retain) NSURL * url;                                //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * method;                          //@synthesize method=_method - In the implementation block
@property (assign,nonatomic) long long status;                           //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSDictionary * headers;                     //@synthesize headers=_headers - In the implementation block
@property (nonatomic,retain) NSString * requestClassName;                //@synthesize requestClassName=_requestClassName - In the implementation block
@property (assign,nonatomic) BOOL parsingStandaloneMessage;              //@synthesize parsingStandaloneMessage=_parsingStandaloneMessage - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)method;
-(NSURL *)url;
-(long long)status;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setMethod:(NSString *)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setStatus:(long long)arg1 ;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(BOOL)parsingStandaloneMessage;
-(void)setParsingStandaloneMessage:(BOOL)arg1 ;
-(void)setRequestClassName:(NSString *)arg1 ;
-(NSString *)requestClassName;
@end

