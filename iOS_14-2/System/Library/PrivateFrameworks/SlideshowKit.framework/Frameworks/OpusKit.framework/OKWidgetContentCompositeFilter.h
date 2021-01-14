/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

#import <OpusKit/OKWidgetBasicFilter.h>
#import <libobjc.A.dylib/JSOKWidgetContentCompositeFilter.h>

@class NSArray, NSString;

@interface OKWidgetContentCompositeFilter : OKWidgetBasicFilter <JSOKWidgetContentCompositeFilter> {

	NSArray* _inputFilters;
	NSArray* _inputBackgroundFilters;
	NSString* _inputCompositionFilterName;

}

@property (nonatomic,retain) NSArray * inputFilters;                             //@synthesize inputFilters=_inputFilters - In the implementation block
@property (nonatomic,retain) NSArray * inputBackgroundFilters;                   //@synthesize inputBackgroundFilters=_inputBackgroundFilters - In the implementation block
@property (nonatomic,retain) NSString * inputCompositionFilterName;              //@synthesize inputCompositionFilterName=_inputCompositionFilterName - In the implementation block
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg1 ;
+(id)filterWithInputFilters:(id)arg1 inputBackgroundFilters:(id)arg2 inputCompositionFilterName:(id)arg3 ;
-(id)inputKeys;
-(id)outputImage;
-(void)dealloc;
-(void)setInputCompositionFilterName:(NSString *)arg1 ;
-(void)setInputBackgroundFilters:(NSArray *)arg1 ;
-(void)setInputFilters:(NSArray *)arg1 ;
-(void)setSettingInputCompositionFilterName:(id)arg1 ;
-(void)setSettingInputFilters:(id)arg1 ;
-(void)setSettingInputBackgroundFilters:(id)arg1 ;
-(NSArray *)inputFilters;
-(NSArray *)inputBackgroundFilters;
-(NSString *)inputCompositionFilterName;
@end

