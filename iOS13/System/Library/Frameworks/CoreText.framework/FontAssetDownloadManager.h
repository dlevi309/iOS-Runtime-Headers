/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
*/


#import <CoreText/CoreText-Structs.h>
@class NSMutableDictionary;

@interface FontAssetDownloadManager : NSObject {

	TCFRef<const __CFArray *>* fDescriptors;
	TCFRef<const __CFSet *>* fMandatoryAttributes;
	/*^block*/id fProgressCallbackBlock;
	NSMutableDictionary* fProgressParams;
	NSMutableDictionary* fDownloadOptions;
	NSMutableDictionary* fAssetToDescriptors;

}
+(unsigned long long)calculateDownloadSize:(id)arg1 ;
+(Class)getMAAssetClass;
+(id)errorWithCode:(long long)arg1 description:(id)arg2 ;
+(BOOL)fontAssetIsAvailableForUse:(id)arg1 ;
+(id)availableMobileAssetsWithOptions:(unsigned)arg1 error:(id*)arg2 ;
+(BOOL)shouldRetryWithServer;
+(id)availableMobileAssetsWithOptions:(unsigned)arg1 manager:(id)arg2 error:(id*)arg3 ;
+(BOOL)shouldIgnoreFontAssetWithAttributes:(id)arg1 ;
+(BOOL)fontInfo:(id)arg1 andAssetDesignLanguages:(id)arg2 matchesRequest:(id)arg3 ;
+(BOOL)activateFontsFromAssetURL:(id)arg1 ;
+(id)attributesFromFontInfo:(id)arg1 assetDesignLanguages:(id)arg2 ;
+(id)availableFontAttributesArrayMatchingRequests:(id)arg1 options:(unsigned long long)arg2 ;
-(void)dealloc;
-(BOOL)callProgressCallback:(unsigned)arg1 ;
-(id)unmatchedDescriptors;
-(id)mobileAssetsForUnmatched:(id)arg1 ;
-(void)setProgressParam:(id)arg1 forKey:(id)arg2 ;
-(BOOL)executeDownloadingFontAssets:(id)arg1 ;
-(id)doFinalMatching;
-(void)setDownloadOptionsForMobileAsset;
-(BOOL)assetStalled:(id)arg1 ;
-(BOOL)downloadAllowed;
-(id)initWithDescriptors:(CFArrayRef)arg1 andMandatoryAttributes:(CFSetRef)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)downloadFontAssets;
@end

