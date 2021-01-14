/*
* Generated on Thursday, January 14, 2021 at 2:20:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)dealloc;
@end

