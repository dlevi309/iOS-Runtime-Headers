/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class SSRequest;

@interface ISStoreServicesRequestOperation : ISOperation {

	SSRequest* _request;

}

@property (readonly) SSRequest * request; 
-(void)run;
-(SSRequest *)request;
-(id)initWithRequest:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
@end

