/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@protocol NTKComplicationPickerListProvider;
@interface NTKComplicationPickerBaseViewConfiguration : NSObject {

	id<NTKComplicationPickerListProvider> _listProvider;

}

@property (nonatomic,readonly) id<NTKComplicationPickerListProvider> listProvider;              //@synthesize listProvider=_listProvider - In the implementation block
-(id)initWithListProvider:(id)arg1 ;
-(id<NTKComplicationPickerListProvider>)listProvider;
@end

