/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
*/

#import <TVPlayback/TVPSecureKeyStandardLoaderRequestGenerating.h>
#import <TVPlayback/TVPSecureKeyStandardLoaderConnectionHandling.h>

@class NSOperationQueue, NSString;

@interface TVPSecureKeyStandardConnector : NSObject <TVPSecureKeyStandardLoaderRequestGenerating, TVPSecureKeyStandardLoaderConnectionHandling> {

	NSOperationQueue* _operationQueue;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;              //@synthesize operationQueue=_operationQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSOperationQueue *)operationQueue;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)secureKeyStandardLoader:(id)arg1 requestForFetchingDataFromURL:(id)arg2 ;
-(void)secureKeyStandardLoader:(id)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)secureKeyStandardLoader:(id)arg1 requestForPostingData:(id)arg2 toURL:(id)arg3 ;
@end

