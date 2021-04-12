/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DASubCal.framework/DASubCal
*/


@protocol SubCalURLRequestDelegate <NSObject>
@optional
-(void)subCalURLRequest:(id)arg1 updatedData:(id)arg2;
-(void)subCalURLRequest:(id)arg1 didRedirectToURL:(id)arg2;
-(void)subCalURLRequestNeedsUsernameAndPasswordForHost:(id)arg1 continuation:(/*^block*/id)arg2;

@required
-(void)subCalURLRequest:(id)arg1 finishedWithData:(id)arg2 error:(id)arg3;
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)handleTrustChallenge:(id)arg1 forSubCalURLRequest:(id)arg2;

@end

