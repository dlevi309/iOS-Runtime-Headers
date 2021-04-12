/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <GeoServices/GEOServiceRequester.h>

@interface GEORPFeedbackRequester : GEOServiceRequester
+(id)sharedInstance;
-(void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)_requestConfigForRequest:(id)arg1 ;
-(id)_validateResponse:(id)arg1 ;
-(void)cancelRequest:(id)arg1 ;
@end

