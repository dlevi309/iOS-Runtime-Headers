/*
* Generated on Thursday, January 14, 2021 at 2:25:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/

#import <Transparency/TransparencyNetworkRequest.h>

@class NSString, NSURL, NSData, NSUUID;

@interface KTLogNetworkRequest : TransparencyNetworkRequest {

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
-(void)setApplication:(NSString *)arg1 ;
-(NSUUID *)uuid;
-(BOOL)isGET;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(NSURL *)url;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(void)setUrl:(NSURL *)arg1 ;
-(NSString *)application;
-(void)setUuid:(NSUUID *)arg1 ;
-(void)setIsGET:(BOOL)arg1 ;
-(id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id*)arg4 ;
-(id)copyRequest:(id*)arg1 ;
-(id)initGETWithURL:(id)arg1 application:(id)arg2 ;
-(id)initPOSTWithURL:(id)arg1 data:(id)arg2 uuid:(id)arg3 application:(id)arg4 ;
@end

