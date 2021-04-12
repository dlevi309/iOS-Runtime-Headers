/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVActionBackedTask.h>

@class NSString, NSData, NSURL;

@interface CoreDAVPostOrPutTask : CoreDAVActionBackedTask {

	BOOL _forceToServer;
	NSString* _previousETag;
	NSString* _requestDataContentType;
	NSData* _requestDataPayload;
	BOOL _sendOrder;
	int _absoluteOrder;
	NSURL* _priorOrderedURL;

}

@property (nonatomic,retain) NSString * requestDataContentType;              //@synthesize requestDataContentType=_requestDataContentType - In the implementation block
@property (nonatomic,retain) NSData * requestDataPayload;                    //@synthesize requestDataPayload=_requestDataPayload - In the implementation block
@property (assign,nonatomic) BOOL forceToServer;                             //@synthesize forceToServer=_forceToServer - In the implementation block
@property (nonatomic,retain) NSURL * priorOrderedURL;                        //@synthesize priorOrderedURL=_priorOrderedURL - In the implementation block
@property (assign,nonatomic) int absoluteOrder;                              //@synthesize absoluteOrder=_absoluteOrder - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                        //@synthesize previousETag=_previousETag - In the implementation block
-(id)initWithURL:(id)arg1 ;
-(id)additionalHeaderValues;
-(id)description;
-(void)setPreviousETag:(NSString *)arg1 ;
-(id)requestBody;
-(int)absoluteOrder;
-(id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4 ;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSString *)previousETag;
-(BOOL)forceToServer;
-(NSData *)requestDataPayload;
-(NSString *)requestDataContentType;
-(void)setForceToServer:(BOOL)arg1 ;
-(void)setRequestDataContentType:(NSString *)arg1 ;
-(void)setRequestDataPayload:(NSData *)arg1 ;
-(NSURL *)priorOrderedURL;
@end

