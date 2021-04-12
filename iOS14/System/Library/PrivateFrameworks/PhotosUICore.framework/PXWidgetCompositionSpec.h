/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXWidgetSpec, PXWidgetBarSpec;

@interface PXWidgetCompositionSpec : NSObject {

	PXWidgetSpec* _widgetSpec;
	long long _maximumNumberOfColumns;
	PXWidgetBarSpec* _footerSpec;
	long long _disclosureLocation;
	PXWidgetBarSpec* __defaultHeaderSpec;
	PXWidgetBarSpec* __headerSpecForFlushedContent;

}

@property (nonatomic,readonly) PXWidgetBarSpec * _defaultHeaderSpec;                        //@synthesize _defaultHeaderSpec=__defaultHeaderSpec - In the implementation block
@property (nonatomic,readonly) PXWidgetBarSpec * _headerSpecForFlushedContent;              //@synthesize _headerSpecForFlushedContent=__headerSpecForFlushedContent - In the implementation block
@property (nonatomic,readonly) PXWidgetSpec * widgetSpec;                                   //@synthesize widgetSpec=_widgetSpec - In the implementation block
@property (nonatomic,readonly) long long maximumNumberOfColumns;                            //@synthesize maximumNumberOfColumns=_maximumNumberOfColumns - In the implementation block
@property (nonatomic,readonly) PXWidgetBarSpec * footerSpec;                                //@synthesize footerSpec=_footerSpec - In the implementation block
@property (nonatomic,readonly) long long disclosureLocation;                                //@synthesize disclosureLocation=_disclosureLocation - In the implementation block
-(id)init;
-(PXWidgetBarSpec *)footerSpec;
-(long long)disclosureLocation;
-(id)initWithExtendedTraitCollection:(id)arg1 widgetSpec:(id)arg2 ;
-(id)headerSpecForWidgetContentLayoutStyle:(long long)arg1 ;
-(PXWidgetBarSpec *)_defaultHeaderSpec;
-(PXWidgetBarSpec *)_headerSpecForFlushedContent;
-(PXWidgetSpec *)widgetSpec;
-(long long)maximumNumberOfColumns;
@end

