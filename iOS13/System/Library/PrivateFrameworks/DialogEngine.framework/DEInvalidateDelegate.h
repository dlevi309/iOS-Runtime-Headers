/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)setDistribution:(NSString *)arg1 ;
-(NSString *)distribution;
-(NSURLSession *)urlSession;
-(void)setUrlSession:(NSURLSession *)arg1 ;
@end

