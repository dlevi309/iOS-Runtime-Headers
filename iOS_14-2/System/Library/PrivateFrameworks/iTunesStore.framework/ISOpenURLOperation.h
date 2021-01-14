/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {

	ISOpenURLRequest* _request;

}

@property (readonly) ISOpenURLRequest * openURLRequest; 
-(BOOL)_openURL:(id)arg1 ;
-(void)run;
-(id)init;
-(id)initWithOpenURLRequest:(id)arg1 ;
-(id)_newSortedTargetsArray;
-(ISOpenURLRequest *)openURLRequest;
@end

