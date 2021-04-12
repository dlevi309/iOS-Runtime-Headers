/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>

@class SSSoftwareUpdatesContext;

@interface SSSoftwareUpdatesRequest : SSRequest {

	SSSoftwareUpdatesContext* _context;

}

@property (assign,nonatomic) id<SSSoftwareUpdatesRequestDelegate> delegate; 
@property (readonly) SSSoftwareUpdatesContext * updateQueueContext; 
-(void)dealloc;
-(BOOL)start;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(void)startWithUpdatesResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithUpdateQueueContext:(id)arg1 ;
-(SSSoftwareUpdatesContext *)updateQueueContext;
@end

