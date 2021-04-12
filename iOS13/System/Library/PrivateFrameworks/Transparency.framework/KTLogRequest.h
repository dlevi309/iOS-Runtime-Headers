/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/TransparencyRequest.h>

@class NSString, NSURL, NSData, NSUUID;

@interface KTLogRequest : TransparencyRequest {

	BOOL _isGET;
	NSString* _application;
	NSURL* _url;
	NSData* _data;
	NSUUID* _uuid;
	double _timeout;

}

@property (retain) NSString * application;              //@synthesize application=_application - In the implementation block
@property (assign) BOOL isGET;                          //@synthesize isGET=_isGET - In the implementation block
@property (retain) NSURL * url;                         //@synthesize url=_url - In the implementation block
@property (retain) NSData * data;                       //@synthesize data=_data - In the implementation block
@property (retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (assign) double timeout;                      //@synthesize timeout=_timeout - In the implementation block
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)url;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)application;
-(void)setApplication:(NSString *)arg1 ;
-(void)setIsGET:(BOOL)arg1 ;
-(BOOL)isGET;
-(id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id*)arg4 ;
-(id)copyRequest:(id*)arg1 ;
-(id)initGETWithURL:(id)arg1 application:(id)arg2 ;
-(id)initPOSTWithURL:(id)arg1 data:(id)arg2 uuid:(id)arg3 application:(id)arg4 ;
@end

