/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
*/

#import <iTunesStore/ISOperation.h>

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation {

	ISOpenURLRequest* _request;

}

@property (readonly) ISOpenURLRequest * openURLRequest; 
-(id)init;
-(void)run;
-(BOOL)_openURL:(id)arg1 ;
-(id)initWithOpenURLRequest:(id)arg1 ;
-(id)_newSortedTargetsArray;
-(ISOpenURLRequest *)openURLRequest;
@end

