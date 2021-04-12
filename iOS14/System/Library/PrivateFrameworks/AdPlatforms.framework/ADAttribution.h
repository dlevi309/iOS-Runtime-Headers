/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AdPlatforms.framework/AdPlatforms
*/


@interface ADAttribution : NSObject {

	BOOL _hasCompletedResponse;
	unsigned char _numRetries;

}

@property (assign,nonatomic) BOOL hasCompletedResponse;              //@synthesize hasCompletedResponse=_hasCompletedResponse - In the implementation block
@property (assign,nonatomic) unsigned char numRetries;               //@synthesize numRetries=_numRetries - In the implementation block
+(id)sharedInstance;
-(id)init;
-(BOOL)hasCompletedResponse;
-(void)setNumRetries:(unsigned char)arg1 ;
-(void)setHasCompletedResponse:(BOOL)arg1 ;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(void)setServerToTest:(long long)arg1 ;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(unsigned char)numRetries;
-(void)initiateRequestOnConnection:(id)arg1 withBlock:(/*^block*/id)arg2 ;
@end

