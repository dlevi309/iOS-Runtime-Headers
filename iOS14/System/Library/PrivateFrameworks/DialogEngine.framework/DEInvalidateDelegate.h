/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>

@class NSURLSession, NSString;

@interface DEInvalidateDelegate : NSObject <NSURLSessionDelegate> {

	NSURLSession* _urlSession;
	NSString* _distribution;

}

@property (nonatomic,retain) NSURLSession * urlSession;              //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,retain) NSString * distribution;                //@synthesize distribution=_distribution - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDistribution:(NSString *)arg1 ;
-(NSString *)distribution;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
@end

