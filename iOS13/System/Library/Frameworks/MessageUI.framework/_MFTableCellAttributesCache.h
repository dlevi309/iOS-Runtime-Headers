/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSCache;

@interface _MFTableCellAttributesCache : NSObject {

	NSCache* _attributesCache;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(/*^block*/id)arg2 ;
-(void)_didReceiveFontSizeChangeNotification:(id)arg1 ;
@end

