/*
* Generated on Thursday, January 14, 2021 at 2:23:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

@class NSURL;


@protocol WBUFormAutoFillFrameHandle <NSObject>
@property (nonatomic,readonly) NSURL * webui_URL; 
@property (nonatomic,readonly) SecTrustRef webui_serverTrust; 
@required
-(SecTrustRef)webui_serverTrust;
-(NSURL *)webui_URL;

@end

