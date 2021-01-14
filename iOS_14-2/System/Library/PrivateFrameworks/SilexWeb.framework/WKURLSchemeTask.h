/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexWeb.framework/SilexWeb
*/

@class NSURLRequest;


@protocol WKURLSchemeTask <NSObject>
@property (nonatomic,copy,readonly) NSURLRequest * request; 
@required
-(void)didReceiveResponse:(id)arg1;
-(NSURLRequest *)request;
-(void)didReceiveData:(id)arg1;
-(void)didFailWithError:(id)arg1;
-(void)didFinish;

@end

