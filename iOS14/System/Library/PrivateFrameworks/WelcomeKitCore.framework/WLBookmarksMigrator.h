/*
* Generated on Thursday, January 14, 2021 at 2:28:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
*/

#import <libobjc.A.dylib/WLDataclassMigrating.h>

@class WebBookmarkCollection, NSString;

@interface WLBookmarksMigrator : NSObject <WLDataclassMigrating> {

	WebBookmarkCollection* _collection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)contentType;
+(id)_createBookmarkFolderWithTitle:(id)arg1 UUID:(id)arg2 ;
+(id)_bookmarkFolderAtTitlePath:(id)arg1 withinBookmarkFolder:(id)arg2 ;
+(id)_createRootBookmarkFolder;
+(id)_bookmarkFolderAtTitlePath:(id)arg1 withinRootFolder:(id)arg2 ;
-(id)dataType;
-(id)contentType;
-(BOOL)accountBased;
-(void)importDataFromProvider:(/*^block*/id)arg1 forSummaries:(id)arg2 summaryStart:(/*^block*/id)arg3 summaryCompletion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)importWillBegin;
-(id)importDidEnd;
@end

