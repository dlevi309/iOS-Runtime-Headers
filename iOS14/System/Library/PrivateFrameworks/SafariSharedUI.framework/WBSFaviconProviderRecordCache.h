/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
*/


#import <SafariSharedUI/SafariSharedUI-Structs.h>
@class NSMutableDictionary;

@interface WBSFaviconProviderRecordCache : NSObject {

	NSMutableDictionary* _iconURLStringToInfoDictionary;
	NSMutableDictionary* _iconUUIDToURLStringDictionary;

}
-(void)removeAllRecords;
-(id)init;
-(id)dateAddedForFaviconURLString:(id)arg1 iconUUID:(id*)arg2 size:(CGSize*)arg3 ;
-(void)setDateAdded:(id)arg1 forFaviconURLString:(id)arg2 iconUUID:(id)arg3 iconSize:(CGSize)arg4 hasGeneratedResolutions:(BOOL)arg5 ;
-(void)removeRecordForIconUUIDs:(id)arg1 ;
-(id)iconInfoForURLString:(id)arg1 ;
@end

