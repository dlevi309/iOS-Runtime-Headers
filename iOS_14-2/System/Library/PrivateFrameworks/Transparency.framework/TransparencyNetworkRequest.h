/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSURL, NSData;

@interface TransparencyNetworkRequest : NSObject {

	BOOL _authenticated;
	BOOL _isGET;
	NSURL* _url;
	NSData* _data;
	double _timeout;

}

@property (retain) NSURL * url;                     //@synthesize url=_url - In the implementation block
@property (retain) NSData * data;                   //@synthesize data=_data - In the implementation block
@property (assign) double timeout;                  //@synthesize timeout=_timeout - In the implementation block
@property (assign) BOOL isGET;                      //@synthesize isGET=_isGET - In the implementation block
@property (assign) BOOL authenticated;              //@synthesize authenticated=_authenticated - In the implementation block
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)isGET;
-(void)setTimeout:(double)arg1 ;
-(double)timeout;
-(NSURL *)url;
-(BOOL)authenticated;
-(void)setData:(NSData *)arg1 ;
-(NSData *)data;
-(id)initWithRequest:(id)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(id)initWithURL:(id)arg1 data:(id)arg2 timeout:(double)arg3 isGET:(BOOL)arg4 ;
-(void)setIsGET:(BOOL)arg1 ;
-(id)initGETWithURL:(id)arg1 ;
-(id)initPOSTWithURL:(id)arg1 data:(id)arg2 ;
-(id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id*)arg4 ;
-(id)copyRequest:(id*)arg1 ;
@end

