/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>

@class SSSoftwareUpdatesContext;

@interface SSSoftwareUpdatesRequest : SSRequest {

	SSSoftwareUpdatesContext* _context;

}

@property (assign,nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate; 
@property (readonly) SSSoftwareUpdatesContext * updateQueueContext; 
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)startWithUpdatesResponseBlock:(/*^block*/id)arg1 ;
-(SSSoftwareUpdatesContext *)updateQueueContext;
-(id)initWithUpdateQueueContext:(id)arg1 ;
-(void)dealloc;
@end

