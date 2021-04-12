/*
* Generated on Monday, March 1, 2021 at 2:35:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKModuleView.h>
#import <libobjc.A.dylib/NTKComplicationDisplay.h>

@protocol NTKComplicationDisplayObserver;
@class NSString;

@interface NTKComplicationModuleView : NTKModuleView <NTKComplicationDisplay> {

	BOOL canUseCurvedText;
	BOOL _isXL;
	id<NTKComplicationDisplayObserver> displayObserver;

}

@property (assign,nonatomic) BOOL isXL;                                                              //@synthesize isXL=_isXL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
+(id)smallModuleViewForComplicationType:(unsigned long long)arg1 ;
+(id)_modularSmallStopwatchImageProvider;
+(id)_extraLargeStopwatchImageProvider;
+(id)largeModuleViewForComplicationType:(unsigned long long)arg1 ;
+(id)_modularSmallAlarmImageProvider;
+(id)_extraLargeAlarmImageProvider;
+(id)_modularSmallTimerImageProvider;
+(id)_extraLargeTimerImageProvider;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(void)setIsXL:(BOOL)arg1 ;
-(BOOL)isXL;
-(id)_newLabelSubviewWithFont:(id)arg1 ;
-(id)_newLabelSubview;
-(void)_setTypographicTracking:(double)arg1 andFont:(id)arg2 onAttributedString:(id*)arg3 inRange:(NSRange)arg4 ;
-(id)_newImageViewSubview;
-(id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3 ;
-(id)_attributedStringWithText:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3 ;
@end
