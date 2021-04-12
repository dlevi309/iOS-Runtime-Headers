/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/


@class NSNumber, NSString, NSURL, NSError, SKPaymentTransaction;

@interface SKDownload : NSObject {

	id _internal;

}

@property (setter=_setDownloadID:,getter=_downloadID,nonatomic,copy) NSNumber * _downloadID; 
@property (nonatomic,readonly) long long state; 
@property (nonatomic,readonly) long long downloadState; 
@property (nonatomic,readonly) long long contentLength; 
@property (nonatomic,readonly) long long expectedContentLength; 
@property (nonatomic,readonly) NSString * contentIdentifier; 
@property (nonatomic,readonly) NSURL * contentURL; 
@property (nonatomic,readonly) NSString * contentVersion; 
@property (nonatomic,readonly) NSError * error; 
@property (nonatomic,readonly) float progress; 
@property (nonatomic,readonly) double timeRemaining; 
@property (nonatomic,readonly) SKPaymentTransaction * transaction; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSError *)error;
-(void)_setTransaction:(id)arg1 ;
-(void)_setError:(id)arg1 ;
-(float)progress;
-(long long)state;
-(void)_setContentIdentifier:(id)arg1 ;
-(NSURL *)contentURL;
-(SKPaymentTransaction *)transaction;
-(long long)expectedContentLength;
-(void)_setProgress:(float)arg1 ;
-(long long)contentLength;
-(NSString *)contentVersion;
-(double)timeRemaining;
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(NSNumber *)_downloadID;
-(void)_setContentLength:(id)arg1 ;
-(void)_setContentURL:(id)arg1 ;
-(long long)downloadState;
-(void)_setDownloadState:(long long)arg1 ;
-(void)_setTimeRemaining:(double)arg1 ;
-(NSString *)contentIdentifier;
-(void)_applyChangeset:(id)arg1 ;
-(void)_setDownloadID:(id)arg1 ;
-(void)_setVersion:(id)arg1 ;
@end
