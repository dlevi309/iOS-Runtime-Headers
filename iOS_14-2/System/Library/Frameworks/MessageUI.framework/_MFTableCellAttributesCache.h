/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


@class NSCache;

@interface _MFTableCellAttributesCache : NSObject {

	NSCache* _attributesCache;

}
+(id)sharedInstance;
-(id)init;
-(id)cachedAttributesForIdentifier:(id)arg1 constructionBlock:(/*^block*/id)arg2 ;
-(void)_didReceiveFontSizeChangeNotification:(id)arg1 ;
-(void)dealloc;
@end

