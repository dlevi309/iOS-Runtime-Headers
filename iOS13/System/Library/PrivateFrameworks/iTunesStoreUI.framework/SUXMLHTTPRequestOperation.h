/*
* Generated on Monday, March 1, 2021 at 2:31:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStore/ISOperation.h>

@class SSURLRequestProperties;

@interface SUXMLHTTPRequestOperation : ISOperation {

	/*^block*/id _outputBlock;
	SSURLRequestProperties* _requestProperties;

}

@property (copy) id outputBlock; 
-(void)run;
-(void)setOutputBlock:(id)arg1 ;
-(id)outputBlock;
-(id)initWithRequestProperties:(id)arg1 ;
-(BOOL)_isAllowedURL:(id)arg1 withURLBag:(id)arg2 ;
@end

