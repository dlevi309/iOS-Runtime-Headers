/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class _PXSettingsIndexEntry, NSString;

@interface PXSettingsSearchResult : NSObject {

	_PXSettingsIndexEntry* _entry;

}

@property (nonatomic,readonly) _PXSettingsIndexEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * subtitle; 
-(id)init;
-(NSString *)subtitle;
-(void)revealInSettingsController:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_initWithEntry:(id)arg1 ;
-(_PXSettingsIndexEntry *)entry;
-(NSString *)title;
@end

