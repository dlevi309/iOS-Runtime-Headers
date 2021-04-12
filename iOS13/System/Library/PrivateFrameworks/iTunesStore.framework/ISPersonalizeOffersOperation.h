/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class ISPersonalizeOffersRequest, SSPersonalizeOffersResponse;

@interface ISPersonalizeOffersOperation : ISOperation {

	ISPersonalizeOffersRequest* _request;
	SSPersonalizeOffersResponse* _response;

}

@property (readonly) ISPersonalizeOffersRequest * personalizeOffersReqeust; 
@property (readonly) SSPersonalizeOffersResponse * response; 
-(void)dealloc;
-(void)run;
-(SSPersonalizeOffersResponse *)response;
-(id)initWithPersonalizeOffersRequest:(id)arg1 ;
-(BOOL)_runWithURLDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_copyResponseForURL:(id)arg1 requestString:(id)arg2 error:(id*)arg3 ;
-(void)_addDictionaryToResponse:(id)arg1 ;
-(ISPersonalizeOffersRequest *)personalizeOffersReqeust;
@end

