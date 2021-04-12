/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSPhishingURLClassifier.h>

@protocol WBSPhishingURLClassifier;
@class NSCache;

@interface WBSPhishingURLClassifierCache : NSObject <WBSPhishingURLClassifier> {

	NSCache* _cache;
	id<WBSPhishingURLClassifier> _urlClassifier;

}

@property (nonatomic,readonly) id<WBSPhishingURLClassifier> urlClassifier;              //@synthesize urlClassifier=_urlClassifier - In the implementation block
-(void)clearCache;
-(void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id<WBSPhishingURLClassifier>)urlClassifier;
-(id)initWithURLClassifier:(id)arg1 ;
-(void)cacheClassification:(unsigned long long)arg1 forURL:(id)arg2 ;
@end

