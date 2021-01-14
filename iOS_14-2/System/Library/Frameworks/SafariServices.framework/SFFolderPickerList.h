/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WebBookmarkCollection;

@interface SFFolderPickerList : NSObject {

	unsigned long long _style;
	WebBookmarkCollection* _bookmarkCollection;

}
-(void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
-(void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
-(id)initWithBookmarkCollection:(id)arg1 style:(unsigned long long)arg2 ;
-(id)folderListItemsIgnoringIdentifiers:(id)arg1 ;
@end

