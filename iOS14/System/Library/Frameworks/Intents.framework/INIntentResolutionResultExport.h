/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class NSArray, NSObject;


@protocol INIntentResolutionResultExport <NSObject,JSExport>
@property (nonatomic,retain) NSArray * disambiguationItems; 
@property (nonatomic,retain) NSArray * alternatives; 
@property (nonatomic,retain) NSObject * resolvedValue; 
@property (nonatomic,retain) NSObject * itemToConfirm; 
@property (assign,nonatomic) unsigned long long unsupportedReason; 
@required
+(id)resolutionResultNeedsValue;
+(id)resolutionResultSuccessWithResolvedValue:(id)arg1;
+(id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1;
+(id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1;
+(id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1;
+(id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2;
+(id)resolutionResultNotRequired;
-(id)init;
-(NSObject *)resolvedValue;
-(void)setResolvedValue:(id)arg1;
-(id)_dataForIntentSlotDescription:(id)arg1;
-(NSObject *)itemToConfirm;
-(void)setItemToConfirm:(id)arg1;
-(unsigned long long)unsupportedReason;
-(void)setUnsupportedReason:(unsigned long long)arg1;
-(void)setAlternatives:(id)arg1;
-(NSArray *)alternatives;
-(NSArray *)disambiguationItems;
-(void)setDisambiguationItems:(id)arg1;

@end

