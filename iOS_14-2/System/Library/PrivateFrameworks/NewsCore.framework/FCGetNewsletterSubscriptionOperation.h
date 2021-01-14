/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCOperation.h>

@class FCNewsletterEndpointConnection;

@interface FCGetNewsletterSubscriptionOperation : FCOperation {

	FCNewsletterEndpointConnection* _endpointConnection;
	/*^block*/id _completion;

}

@property (nonatomic,retain) FCNewsletterEndpointConnection * endpointConnection;              //@synthesize endpointConnection=_endpointConnection - In the implementation block
@property (nonatomic,copy) id completion;                                                      //@synthesize completion=_completion - In the implementation block
-(FCNewsletterEndpointConnection *)endpointConnection;
-(void)performOperation;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setEndpointConnection:(FCNewsletterEndpointConnection *)arg1 ;
-(id)initWithEndpointConnection:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

