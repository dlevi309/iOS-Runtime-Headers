/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

@class NSDiffableDataSourceSnapshot;


@protocol NTKComplicationPickerListProvider <NSObject>
@property (nonatomic,readonly) NSDiffableDataSourceSnapshot * pickerListDataSourceSnapshot; 
@property (nonatomic,readonly) id<NTKComplicationItem> pickerSelectedItem; 
@property (nonatomic,readonly) BOOL pickerListProviderSlotIsRich; 
@required
-(BOOL)pickerListProviderSlotIsRich;
-(void)addListProviderListener:(id)arg1;
-(void)removeListProviderListener:(id)arg1;
-(NSDiffableDataSourceSnapshot *)pickerListDataSourceSnapshot;
-(id<NTKComplicationItem>)pickerSelectedItem;

@end

