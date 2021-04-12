/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WebBookmarkCollection;

@interface SFFolderPickerList : NSObject {

	unsigned long long _style;
	WebBookmarkCollection* _bookmarkCollection;

}
-(id)initWithBookmarkCollection:(id)arg1 style:(unsigned long long)arg2 ;
-(id)folderListItemsIgnoringIdentifiers:(id)arg1 ;
-(void)_appendFolderAndChildren:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
-(void)_appendChildrenOfFolder:(id)arg1 toArray:(id)arg2 depth:(unsigned long long)arg3 ignoringIdentifiers:(id)arg4 ;
@end

