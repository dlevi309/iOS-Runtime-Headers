/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKRichComplicationBezelBaseTextView.h>
#import <libobjc.A.dylib/NTKMonogramComplicationDisplay.h>

@class NTKColoringLabel, NSString;

@interface NTKRichComplicationBezelMonogramView : NTKRichComplicationBezelBaseTextView <NTKMonogramComplicationDisplay> {

	NTKColoringLabel* _textLabel;
	NSString* _monogramText;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
-(id)_labelFont;
-(void)setMonogramText:(id)arg1 ;
-(id)_createLabelViewWithFont:(id)arg1 ;
@end

