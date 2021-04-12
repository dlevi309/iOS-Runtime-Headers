/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
*/


@class NSURL, NSData;

@interface TransparencyRequest : NSObject {

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
-(NSData *)data;
-(void)setData:(NSData *)arg1 ;
-(NSURL *)url;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(void)setUrl:(NSURL *)arg1 ;
-(void)setAuthenticated:(BOOL)arg1 ;
-(BOOL)authenticated;
-(id)initWithRequest:(id)arg1 ;
-(id)initWithURL:(id)arg1 data:(id)arg2 timeout:(double)arg3 isGET:(BOOL)arg4 ;
-(void)setIsGET:(BOOL)arg1 ;
-(id)initGETWithURL:(id)arg1 ;
-(id)initPOSTWithURL:(id)arg1 data:(id)arg2 ;
-(BOOL)isGET;
-(id)createGETRequestForURL:(id)arg1 timeout:(double)arg2 error:(id*)arg3 ;
-(id)createPOSTRequestForURL:(id)arg1 timeout:(double)arg2 contents:(id)arg3 error:(id*)arg4 ;
-(id)copyRequest:(id*)arg1 ;
@end

