/*
* Generated on Monday, March 1, 2021 at 2:33:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AdPlatforms.framework/AdPlatforms
*/

#import <libobjc.A.dylib/ADAttribution_XPC.h>

@interface ADAttribution : NSObject <ADAttribution_XPC> {

	BOOL _hasCompletedResponse;
	int _numRetries;

}

@property (assign,nonatomic) BOOL hasCompletedResponse;              //@synthesize hasCompletedResponse=_hasCompletedResponse - In the implementation block
@property (assign,nonatomic) int numRetries;                         //@synthesize numRetries=_numRetries - In the implementation block
+(id)sharedInstance;
-(id)init;
-(int)numRetries;
-(void)requestAttributionDetailsWithBlock:(/*^block*/id)arg1 ;
-(void)setNumRetries:(int)arg1 ;
-(void)setStocksAdEnabled:(BOOL)arg1 ;
-(void)initiateRequestOnConnection:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)hasCompletedResponse;
-(void)setHasCompletedResponse:(BOOL)arg1 ;
@end

