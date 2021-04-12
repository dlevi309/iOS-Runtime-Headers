/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)initWithURL:(id)arg1 ;
-(id)requestBody;
-(id)additionalHeaderValues;
-(void)setPreviousETag:(NSString *)arg1 ;
-(NSString *)previousETag;
-(id)initWithDataPayload:(id)arg1 dataContentType:(id)arg2 atURL:(id)arg3 previousETag:(id)arg4 ;
-(BOOL)forceToServer;
-(void)setForceToServer:(BOOL)arg1 ;
-(NSData *)requestDataPayload;
-(int)absoluteOrder;
-(void)setAbsoluteOrder:(int)arg1 ;
-(void)setPriorOrderedURL:(NSURL *)arg1 ;
-(NSString *)requestDataContentType;
-(void)setRequestDataContentType:(NSString *)arg1 ;
-(void)setRequestDataPayload:(NSData *)arg1 ;
-(NSURL *)priorOrderedURL;
@end

