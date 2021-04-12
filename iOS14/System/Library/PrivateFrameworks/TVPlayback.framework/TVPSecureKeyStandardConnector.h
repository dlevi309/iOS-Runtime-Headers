/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(id)init;
-(id)secureKeyStandardLoader:(id)arg1 requestForFetchingDataFromURL:(id)arg2 ;
-(void)secureKeyStandardLoader:(id)arg1 sendAsynchronousRequest:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)secureKeyStandardLoader:(id)arg1 requestForPostingData:(id)arg2 toURL:(id)arg3 ;
@end

