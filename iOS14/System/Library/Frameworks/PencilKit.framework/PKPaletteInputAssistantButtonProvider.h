/*
* Generated on Thursday, January 14, 2021 at 2:24:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/


@class UITextInputAssistantItem;

@interface PKPaletteInputAssistantButtonProvider : NSObject {

	UITextInputAssistantItem* _inputAssistantItem;
	/*^block*/id _inclusionFilter;

}

@property (nonatomic,retain) UITextInputAssistantItem * inputAssistantItem;              //@synthesize inputAssistantItem=_inputAssistantItem - In the implementation block
@property (nonatomic,copy) id inclusionFilter;                                           //@synthesize inclusionFilter=_inclusionFilter - In the implementation block
-(id)init;
-(UITextInputAssistantItem *)inputAssistantItem;
-(id)initWithInputAssistantItem:(id)arg1 ;
-(void)setInputAssistantItem:(UITextInputAssistantItem *)arg1 ;
-(id)buttonsForCurrentConfiguration;
-(id)_nonSystemBarButtonItemGroups;
-(BOOL)_shouldIncludeBarButtonItem:(id)arg1 ;
-(id)inclusionFilter;
-(void)setInclusionFilter:(id)arg1 ;
@end

