/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HelpKit.framework/HelpKit
*/


@class NSURL, NSDictionary, TPSURLSessionItem;

@interface HLPRemoteDataController : NSObject {

	BOOL _loading;
	BOOL _hasLoaded;
	NSURL* _URL;
	NSDictionary* _headerFields;
	TPSURLSessionItem* _URLSessionItem;

}

@property (nonatomic,retain) TPSURLSessionItem * URLSessionItem;              //@synthesize URLSessionItem=_URLSessionItem - In the implementation block
@property (assign,nonatomic) BOOL loading;                                    //@synthesize loading=_loading - In the implementation block
@property (assign,nonatomic) BOOL hasLoaded;                                  //@synthesize hasLoaded=_hasLoaded - In the implementation block
@property (nonatomic,copy) NSURL * URL;                                       //@synthesize URL=_URL - In the implementation block
@property (nonatomic,retain) NSDictionary * headerFields;                     //@synthesize headerFields=_headerFields - In the implementation block
-(void)setLoading:(BOOL)arg1 ;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)setURL:(NSURL *)arg1 ;
-(NSDictionary *)headerFields;
-(void)setHasLoaded:(BOOL)arg1 ;
-(BOOL)loading;
-(void)clearData;
-(NSURL *)URL;
-(void)cancel;
-(void)dealloc;
-(BOOL)hasLoaded;
-(void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(TPSURLSessionItem *)URLSessionItem;
-(void)setURLSessionItem:(TPSURLSessionItem *)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
@end

