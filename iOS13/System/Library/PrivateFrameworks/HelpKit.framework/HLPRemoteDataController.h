/*
* Generated on Monday, March 1, 2021 at 2:34:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)initWithURL:(id)arg1 ;
-(void)cancel;
-(void)setURL:(NSURL *)arg1 ;
-(NSURL *)URL;
-(NSDictionary *)headerFields;
-(BOOL)loading;
-(void)setHeaderFields:(NSDictionary *)arg1 ;
-(void)clearData;
-(void)setLoading:(BOOL)arg1 ;
-(BOOL)hasLoaded;
-(void)setHasLoaded:(BOOL)arg1 ;
-(void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)processFileURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(TPSURLSessionItem *)URLSessionItem;
-(void)setURLSessionItem:(TPSURLSessionItem *)arg1 ;
-(void)processData:(id)arg1 formattedData:(id)arg2 ;
@end

