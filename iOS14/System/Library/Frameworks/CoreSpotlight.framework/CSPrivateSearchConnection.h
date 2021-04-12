/*
* Generated on Thursday, January 14, 2021 at 2:21:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
*/

#import <CoreSpotlight/CSSearchConnection.h>

@class NSString;

@interface CSPrivateSearchConnection : CSSearchConnection {

	NSString* _token;

}

@property (nonatomic,retain) NSString * token;              //@synthesize token=_token - In the implementation block
+(id)privateSearchConnectionWithToken:(id)arg1 ;
-(id)createXPCDictionaryForQuery:(id)arg1 queryID:(long long)arg2 queryContext:(id)arg3 needsInitialization:(BOOL)arg4 ;
-(void)sendMessageAsync:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setToken:(NSString *)arg1 ;
-(NSString *)token;
-(id)initWithToken:(id)arg1 ;
@end

