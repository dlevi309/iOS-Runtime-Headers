/*
* Generated on Thursday, January 14, 2021 at 2:22:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
*/


@class BUBag, NSNumber, NSData, NSString;

@interface BLDAAPURLRequest : NSObject {

	BUBag* _bag;
	NSNumber* _DSID;
	long long _reason;
	NSData* _body;
	NSString* _daapURL;
	long long _requestMethod;
	unsigned long long _contentType;
	long long _dataEncoding;

}

@property (nonatomic,retain) NSNumber * DSID;                             //@synthesize DSID=_DSID - In the implementation block
@property (assign,nonatomic) long long reason;                            //@synthesize reason=_reason - In the implementation block
@property (nonatomic,retain) NSData * body;                               //@synthesize body=_body - In the implementation block
@property (nonatomic,retain) NSString * daapURL;                          //@synthesize daapURL=_daapURL - In the implementation block
@property (assign,nonatomic) long long requestMethod;                     //@synthesize requestMethod=_requestMethod - In the implementation block
@property (assign,nonatomic) unsigned long long contentType;              //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) long long dataEncoding;                      //@synthesize dataEncoding=_dataEncoding - In the implementation block
-(void)setBody:(NSData *)arg1 ;
-(NSNumber *)DSID;
-(NSData *)body;
-(long long)dataEncoding;
-(void)executeWithCompletionHandler:(/*^block*/id)arg1 ;
-(unsigned long long)contentType;
-(void)setDataEncoding:(long long)arg1 ;
-(void)setDSID:(NSNumber *)arg1 ;
-(id)description;
-(NSString *)daapURL;
-(long long)reason;
-(void)setContentType:(unsigned long long)arg1 ;
-(id)initWithDSID:(id)arg1 reason:(long long)arg2 ;
-(id)createDaapURL:(id)arg1 ;
-(void)setDaapURL:(NSString *)arg1 ;
-(void)setReason:(long long)arg1 ;
-(void)setRequestMethod:(long long)arg1 ;
-(long long)requestMethod;
-(void)_URLWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_requestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_URLWithRetry:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_valueForDAAPBagKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_serverParametersWithCompletionHandler:(/*^block*/id)arg1 ;
@end

