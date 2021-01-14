/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

@class NSString, NSURL;


@protocol _WKObservablePageState
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (nonatomic,readonly) double estimatedProgress; 
@property (nonatomic,readonly) BOOL hasOnlySecureContent; 
@property (nonatomic,readonly) BOOL _webProcessIsResponsive; 
@property (nonatomic,readonly) NSURL * unreachableURL; 
@property (nonatomic,readonly) SecTrustRef serverTrust; 
@required
-(SecTrustRef)serverTrust;
-(BOOL)isLoading;
-(NSURL *)URL;
-(NSURL *)unreachableURL;
-(double)estimatedProgress;
-(BOOL)hasOnlySecureContent;
-(BOOL)_webProcessIsResponsive;
-(NSString *)title;

@end

