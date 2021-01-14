/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/NTKComplicationPickerListProvider.h>

@protocol NTKComplicationItem;
@class NSArray, NSDiffableDataSourceSnapshot, NSHashTable, NSString;

@interface NTKFaceSlotComplicationDetailListProvider : NSObject <NTKComplicationPickerListProvider> {

	BOOL _pickerListProviderSlotIsRich;
	id<NTKComplicationItem> _pickerSelectedItem;
	NSArray* _complications;
	NSDiffableDataSourceSnapshot* _pickerListDataSourceSnapshot;
	NSHashTable* _listProviderListeners;

}

@property (nonatomic,copy) NSArray * complications;                                                  //@synthesize complications=_complications - In the implementation block
@property (nonatomic,copy) NSDiffableDataSourceSnapshot * pickerListDataSourceSnapshot;              //@synthesize pickerListDataSourceSnapshot=_pickerListDataSourceSnapshot - In the implementation block
@property (nonatomic,retain) NSHashTable * listProviderListeners;                                    //@synthesize listProviderListeners=_listProviderListeners - In the implementation block
@property (nonatomic,readonly) id<NTKComplicationItem> pickerSelectedItem;                           //@synthesize pickerSelectedItem=_pickerSelectedItem - In the implementation block
@property (nonatomic,readonly) BOOL pickerListProviderSlotIsRich;                                    //@synthesize pickerListProviderSlotIsRich=_pickerListProviderSlotIsRich - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)complications;
-(void)_buildDataIfNeeded;
-(BOOL)pickerListProviderSlotIsRich;
-(id)initWithRichSlot:(BOOL)arg1 complications:(id)arg2 selectedComplication:(id)arg3 ;
-(NSHashTable *)listProviderListeners;
-(void)setPickerListDataSourceSnapshot:(NSDiffableDataSourceSnapshot *)arg1 ;
-(void)addListProviderListener:(id)arg1 ;
-(void)removeListProviderListener:(id)arg1 ;
-(NSDiffableDataSourceSnapshot *)pickerListDataSourceSnapshot;
-(id<NTKComplicationItem>)pickerSelectedItem;
-(void)setComplications:(NSArray *)arg1 ;
-(void)setListProviderListeners:(NSHashTable *)arg1 ;
@end

