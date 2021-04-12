/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/SSRequest.h>
#import <libobjc.A.dylib/SSXPCCoding.h>

@class SSPlayInfoRequestContext, SSPlayInfoResponse, NSString;

@interface SSPlayInfoRequest : SSRequest <SSXPCCoding> {

	SSPlayInfoRequestContext* _context;
	SSPlayInfoResponse* _response;

}

@property (assign,nonatomic) id<SSPlayInfoRequestDelegate> delegate; 
@property (readonly) SSPlayInfoRequestContext * playInfoContext; 
@property (readonly) SSPlayInfoResponse * playInfoResponse; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)start;
-(id)initWithPlayInfoContext:(id)arg1 ;
-(void)startWithPlayInfoResponseBlock:(/*^block*/id)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(SSPlayInfoRequestContext *)playInfoContext;
-(SSPlayInfoResponse *)playInfoResponse;
@end

