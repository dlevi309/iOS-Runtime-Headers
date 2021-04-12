/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)run;
-(SSPersonalizeOffersResponse *)response;
-(void)dealloc;
-(id)initWithPersonalizeOffersRequest:(id)arg1 ;
-(BOOL)_runWithURLDictionary:(id)arg1 error:(id*)arg2 ;
-(id)_copyResponseForURL:(id)arg1 requestString:(id)arg2 error:(id*)arg3 ;
-(void)_addDictionaryToResponse:(id)arg1 ;
-(ISPersonalizeOffersRequest *)personalizeOffersReqeust;
@end

