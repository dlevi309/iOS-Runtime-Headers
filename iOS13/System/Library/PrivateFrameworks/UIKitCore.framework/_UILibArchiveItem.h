/*
* Generated on Monday, March 1, 2021 at 2:30:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIArchiveItem.h>

@interface _UILibArchiveItem : _UIArchiveItem {

	ui_archive_entryRef _underlyingArchiveEntry;
	ui_archiveRef _underlyingArchive;

}

@property (readonly) ui_archive_entryRef underlyingArchiveEntry;              //@synthesize underlyingArchiveEntry=_underlyingArchiveEntry - In the implementation block
@property (readonly) ui_archiveRef underlyingArchive;                         //@synthesize underlyingArchive=_underlyingArchive - In the implementation block
+(id)itemByReadingAttributesFromUnderlyingArchiveEntry:(ui_archive_entryRef)arg1 archive:(ui_archiveRef)arg2 ;
-(ui_archive_entryRef)underlyingArchiveEntry;
-(ui_archiveRef)underlyingArchive;
@end

