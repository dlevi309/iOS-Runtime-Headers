/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDictionary, NSError;

@interface FCNetworkEvent : NSObject <NSCopying> {

	long long _type;
	NSURL* _URL;
	NSString* _requestUUID;
	NSString* _operationID;
	double _startTime;
	NSDictionary* _w3cNavigationTiming;
	unsigned long long _requestSize;
	unsigned long long _responseSize;
	NSString* _responseMIMEType;
	unsigned long long _HTTPStatusCode;
	NSString* _HTTPMethod;
	NSDictionary* _HTTPResponseHeaders;
	NSString* _containerName;
	NSError* _error;

}

@property (assign,nonatomic) long long type;                                 //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                      //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * requestUUID;                           //@synthesize requestUUID=_requestUUID - In the implementation block
@property (nonatomic,copy) NSString * operationID;                           //@synthesize operationID=_operationID - In the implementation block
@property (assign,nonatomic) double startTime;                               //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,copy) NSDictionary * w3cNavigationTiming;               //@synthesize w3cNavigationTiming=_w3cNavigationTiming - In the implementation block
@property (assign,nonatomic) unsigned long long requestSize;                 //@synthesize requestSize=_requestSize - In the implementation block
@property (assign,nonatomic) unsigned long long responseSize;                //@synthesize responseSize=_responseSize - In the implementation block
@property (nonatomic,copy) NSString * responseMIMEType;                      //@synthesize responseMIMEType=_responseMIMEType - In the implementation block
@property (assign,nonatomic) unsigned long long HTTPStatusCode;              //@synthesize HTTPStatusCode=_HTTPStatusCode - In the implementation block
@property (nonatomic,copy) NSString * HTTPMethod;                            //@synthesize HTTPMethod=_HTTPMethod - In the implementation block
@property (nonatomic,copy) NSDictionary * HTTPResponseHeaders;               //@synthesize HTTPResponseHeaders=_HTTPResponseHeaders - In the implementation block
@property (nonatomic,copy) NSString * containerName;                         //@synthesize containerName=_containerName - In the implementation block
@property (nonatomic,copy) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) double totalDuration; 
@property (nonatomic,readonly) double fetchStartTime; 
@property (nonatomic,readonly) double dnsDuration; 
@property (nonatomic,readonly) double connectDuration; 
@property (nonatomic,readonly) double requestDuration; 
@property (nonatomic,readonly) double responseDuration; 
@property (nonatomic,readonly) double responseEndTime; 
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSString *)containerName;
-(void)setContainerName:(NSString *)arg1 ;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(double)startTime;
-(NSString *)HTTPMethod;
-(double)responseEndTime;
-(void)setStartTime:(double)arg1 ;
-(NSString *)operationID;
-(NSString *)requestUUID;
-(NSDictionary *)w3cNavigationTiming;
-(void)setOperationID:(NSString *)arg1 ;
-(void)setRequestUUID:(NSString *)arg1 ;
-(unsigned long long)HTTPStatusCode;
-(double)totalDuration;
-(unsigned long long)responseSize;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(double)fetchStartTime;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(NSString *)responseMIMEType;
-(double)dnsDuration;
-(double)connectDuration;
-(double)requestDuration;
-(double)responseDuration;
-(void)setHTTPStatusCode:(unsigned long long)arg1 ;
-(NSDictionary *)HTTPResponseHeaders;
-(void)setW3cNavigationTiming:(NSDictionary *)arg1 ;
-(void)setHTTPResponseHeaders:(NSDictionary *)arg1 ;
-(void)setRequestSize:(unsigned long long)arg1 ;
-(unsigned long long)requestSize;
@end

