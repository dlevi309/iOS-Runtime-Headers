/*
* Generated on Thursday, January 14, 2021 at 2:23:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
*/


#import <MessageUI/MessageUI-Structs.h>
@class MFLock;

@interface MFWebKitMainThread : NSObject {

	CFDictionaryRef _visibleDict;
	MFLock* _visibleDictLock;

}
+(id)sharedInstance;
-(int)dictValueForMimeType:(id)arg1 ;
-(id)init;
-(void)_mainThreadPopulateDictForMimeType:(id)arg1 ;
-(void)dealloc;
@end

