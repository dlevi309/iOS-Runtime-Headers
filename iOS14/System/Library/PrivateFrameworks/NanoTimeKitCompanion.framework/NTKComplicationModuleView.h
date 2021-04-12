/*
* Generated on Thursday, January 14, 2021 at 2:26:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (assign,nonatomic,__weak) id<NTKComplicationDisplayObserver> displayObserver; 
@property (assign,nonatomic) BOOL canUseCurvedText; 
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted; 
@property (assign,nonatomic) BOOL shouldUseTemplateColors; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)smallModuleViewForComplicationType:(unsigned long long)arg1 ;
+(id)_modularSmallStopwatchImageProvider;
+(id)_extraLargeStopwatchImageProvider;
+(id)largeModuleViewForComplicationType:(unsigned long long)arg1 ;
+(id)_modularSmallAlarmImageProvider;
+(id)_extraLargeAlarmImageProvider;
+(id)_modularSmallTimerImageProvider;
+(id)_extraLargeTimerImageProvider;
-(BOOL)isXL;
-(void)setIsXL:(BOOL)arg1 ;
-(id<NTKComplicationDisplayObserver>)displayObserver;
-(void)setDisplayObserver:(id<NTKComplicationDisplayObserver>)arg1 ;
-(BOOL)canUseCurvedText;
-(void)setCanUseCurvedText:(BOOL)arg1 ;
-(id)_newLabelSubviewWithFont:(id)arg1 ;
-(id)_newLabelSubview;
-(void)_setTypographicTracking:(double)arg1 andFont:(id)arg2 onAttributedString:(id*)arg3 inRange:(NSRange)arg4 ;
-(id)_newImageViewSubview;
-(id)_attributeEnDashesWithinString:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3 ;
-(id)_attributedStringWithText:(id)arg1 typographicTracking:(double)arg2 baseFont:(id)arg3 ;
@end

