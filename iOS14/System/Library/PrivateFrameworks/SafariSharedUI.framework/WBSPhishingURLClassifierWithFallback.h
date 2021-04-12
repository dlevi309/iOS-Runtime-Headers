/*
* Generated on Thursday, January 14, 2021 at 2:24:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/

#import <libobjc.A.dylib/WBSPhishingURLClassifier.h>

@protocol WBSPhishingURLClassifier;
@interface WBSPhishingURLClassifierWithFallback : NSObject <WBSPhishingURLClassifier> {

	id<WBSPhishingURLClassifier> _urlClassifier;
	id<WBSPhishingURLClassifier> _fallbackClassifier;

}

@property (nonatomic,readonly) id<WBSPhishingURLClassifier> urlClassifier;                   //@synthesize urlClassifier=_urlClassifier - In the implementation block
@property (nonatomic,readonly) id<WBSPhishingURLClassifier> fallbackClassifier;              //@synthesize fallbackClassifier=_fallbackClassifier - In the implementation block
+(id)buildChain:(id)arg1 ;
-(void)classifyURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithURLClassifier:(id)arg1 fallback:(id)arg2 ;
-(id<WBSPhishingURLClassifier>)urlClassifier;
-(id<WBSPhishingURLClassifier>)fallbackClassifier;
@end

