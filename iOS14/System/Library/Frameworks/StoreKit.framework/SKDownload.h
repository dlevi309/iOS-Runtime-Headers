/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithXPCEncoding:(id)arg1 ;
-(id)copyXPCEncoding;
-(long long)contentLength;
-(NSURL *)contentURL;
-(long long)downloadState;
-(float)progress;
-(id)init;
-(SKPaymentTransaction *)transaction;
-(NSString *)contentIdentifier;
-(void)_setError:(id)arg1 ;
-(NSNumber *)_downloadID;
-(NSError *)error;
-(double)timeRemaining;
-(void)_setContentIdentifier:(id)arg1 ;
-(long long)state;
-(NSString *)contentVersion;
-(void)_setVersion:(id)arg1 ;
-(long long)expectedContentLength;
-(void)_setProgress:(float)arg1 ;
-(void)_setTransaction:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)_setContentLength:(id)arg1 ;
-(void)_setContentURL:(id)arg1 ;
-(void)_setDownloadState:(long long)arg1 ;
-(void)_setTimeRemaining:(double)arg1 ;
-(void)_applyChangeset:(id)arg1 ;
-(void)_setDownloadID:(id)arg1 ;
@end

