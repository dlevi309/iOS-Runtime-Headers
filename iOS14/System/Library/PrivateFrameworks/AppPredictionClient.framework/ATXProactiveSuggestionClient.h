/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/ATXProactiveSuggestionClientProtocol.h>

@class ATXUICacheManager, NSString;

@interface ATXProactiveSuggestionClient : NSObject <ATXProactiveSuggestionClientProtocol> {

	unsigned char _consumer;
	ATXUICacheManager* _cacheManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithConsumerSubType:(unsigned char)arg1 ;
-(id)suggestionLayoutFromCache;
@end

