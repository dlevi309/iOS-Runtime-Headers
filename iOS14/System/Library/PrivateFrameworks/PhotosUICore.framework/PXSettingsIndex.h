/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray;

@interface PXSettingsIndex : NSObject {

	NSArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries;              //@synthesize entries=_entries - In the implementation block
+(id)createIndexForSettings:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
+(id)_entriesForSettingsController:(id)arg1 usingProgress:(id)arg2 ;
-(id)init;
-(id)_initWithEntries:(id)arg1 ;
-(id)searchForText:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(NSArray *)entries;
@end

