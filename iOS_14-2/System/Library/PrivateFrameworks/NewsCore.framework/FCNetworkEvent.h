/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSString, NSDictionary, NSError;

@interface FCNetworkEvent : NSObject <NSCopying> {

	int _type;
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

@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
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
-(double)fetchStartTime;
-(double)responseEndTime;
-(double)totalDuration;
-(void)setResponseMIMEType:(NSString *)arg1 ;
-(unsigned long long)HTTPStatusCode;
-(void)setResponseSize:(unsigned long long)arg1 ;
-(unsigned long long)responseSize;
-(NSString *)responseMIMEType;
-(void)setRequestUUID:(NSString *)arg1 ;
-(NSString *)HTTPMethod;
-(NSString *)requestUUID;
-(NSString *)operationID;
-(double)dnsDuration;
-(void)setOperationID:(NSString *)arg1 ;
-(void)setHTTPStatusCode:(unsigned long long)arg1 ;
-(double)responseDuration;
-(double)connectDuration;
-(NSDictionary *)HTTPResponseHeaders;
-(void)setURL:(NSURL *)arg1 ;
-(void)setStartTime:(double)arg1 ;
-(id)debugDescription;
-(void)setW3cNavigationTiming:(NSDictionary *)arg1 ;
-(void)setType:(int)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)setContainerName:(NSString *)arg1 ;
-(id)description;
-(void)setHTTPResponseHeaders:(NSDictionary *)arg1 ;
-(void)setRequestSize:(unsigned long long)arg1 ;
-(int)type;
-(NSURL *)URL;
-(NSString *)containerName;
-(void)setHTTPMethod:(NSString *)arg1 ;
-(double)requestDuration;
-(unsigned long long)requestSize;
-(NSDictionary *)w3cNavigationTiming;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)startTime;
@end

