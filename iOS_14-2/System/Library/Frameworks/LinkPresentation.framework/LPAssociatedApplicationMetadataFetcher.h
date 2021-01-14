/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LPFetcher.h>

@class NSURL, NSString;

@interface LPAssociatedApplicationMetadataFetcher : LPFetcher {

	/*^block*/id _completionHandler;
	NSURL* _URL;
	NSString* _bundleIdentifier;

}

@property (nonatomic,retain) NSURL * URL;                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
-(void)fetchWithConfiguration:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setURL:(NSURL *)arg1 ;
-(void)_failedWithErrorCode:(long long)arg1 underlyingError:(id)arg2 ;
-(void)_completedWithClipMetadata:(id)arg1 iconURL:(id)arg2 error:(id)arg3 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSURL *)URL;
-(void)cancel;
@end

