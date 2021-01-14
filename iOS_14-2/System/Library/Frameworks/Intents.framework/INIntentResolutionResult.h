/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <libobjc.A.dylib/INIntentResolutionResultExport.h>
#import <libobjc.A.dylib/INIntentResolutionResultDataProviding.h>

@class NSArray, NSObject, INIntent, NSString;

@interface INIntentResolutionResult : NSObject <INIntentResolutionResultExport, INIntentResolutionResultDataProviding> {

	long long _resolutionResultCode;
	NSArray* _disambiguationItems;
	NSArray* _alternatives;
	id _resolvedValue;
	id _itemToConfirm;
	unsigned long long _unsupportedReason;
	unsigned long long _confirmationReason;
	INIntent* _intentToExecute;

}

@property (assign,nonatomic) long long resolutionResultCode;                     //@synthesize resolutionResultCode=_resolutionResultCode - In the implementation block
@property (nonatomic,retain) NSArray * disambiguationItems;                      //@synthesize disambiguationItems=_disambiguationItems - In the implementation block
@property (nonatomic,retain) NSArray * alternatives;                             //@synthesize alternatives=_alternatives - In the implementation block
@property (nonatomic,retain) id resolvedValue;                                   //@synthesize resolvedValue=_resolvedValue - In the implementation block
@property (nonatomic,retain) id itemToConfirm;                                   //@synthesize itemToConfirm=_itemToConfirm - In the implementation block
@property (assign,nonatomic) unsigned long long unsupportedReason;               //@synthesize unsupportedReason=_unsupportedReason - In the implementation block
@property (assign,nonatomic) unsigned long long confirmationReason;              //@synthesize confirmationReason=_confirmationReason - In the implementation block
@property (nonatomic,retain) INIntent * intentToExecute;                         //@synthesize intentToExecute=_intentToExecute - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unsupportedWithReason:(long long)arg1 ;
+(id)confirmationRequiredWithItemToConfirm:(id)arg1 forReason:(long long)arg2 ;
+(id)notRequired;
+(id)needsValue;
+(id)resolutionResultNeedsValue;
+(id)resolutionResultSuccessWithResolvedValue:(id)arg1 ;
+(id)resolutionResultDisambiguationWithItemsToDisambiguate:(id)arg1 ;
+(id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 ;
+(id)resolutionResultConfirmationRequiredWithItemToConfirm:(id)arg1 ;
+(id)resolutionResultUnsupportedWithReason:(unsigned long long)arg1 alternativeItems:(id)arg2 ;
+(id)resolutionResultNotRequired;
+(id)unsupported;
+(id)requiresExecutionOfIntent:(id)arg1 ;
+(id)_dataForResolutionMethodUnimplemented;
+(id)_resolutionResultWithData:(id)arg1 slotDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(id)resolvedValue;
-(void)setResolvedValue:(id)arg1 ;
-(id)resolutionResultDataForIntent:(id)arg1 intentSlotDescription:(id)arg2 error:(id*)arg3 ;
-(id)_JSONDictionaryRepresentationForIntent:(id)arg1 parameterName:(id)arg2 ;
-(id)_dataForIntentSlotDescription:(id)arg1 ;
-(id)itemToConfirm;
-(void)setItemToConfirm:(id)arg1 ;
-(unsigned long long)unsupportedReason;
-(void)setUnsupportedReason:(unsigned long long)arg1 ;
-(id)_initWithResultCode:(long long)arg1 ;
-(id)_initWithResolutionResult:(id)arg1 ;
-(id)initWithJSONDictionary:(id)arg1 forIntent:(id)arg2 ;
-(id)_stringForResultCode:(long long)arg1 ;
-(long long)resolutionResultCode;
-(void)setResolutionResultCode:(long long)arg1 ;
-(unsigned long long)confirmationReason;
-(void)setConfirmationReason:(unsigned long long)arg1 ;
-(INIntent *)intentToExecute;
-(void)setIntentToExecute:(INIntent *)arg1 ;
-(id)_initWithIntentSlotResolutionResult:(id)arg1 slotDescription:(id)arg2 ;
-(id)_buildIntentSlotResolutionResultWithIntentSlotDescription:(id)arg1 ;
-(void)setAlternatives:(NSArray *)arg1 ;
-(NSString *)description;
-(id)_objectForIntentSlotValue:(id)arg1 slotDescription:(id)arg2 ;
-(NSArray *)alternatives;
-(id)_intentSlotValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(id)_vocabularyValueForObject:(id)arg1 slotDescription:(id)arg2 ;
-(void)transformResolutionResultForIntent:(id)arg1 intentSlotDescription:(id)arg2 withOptionsProvider:(id)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)disambiguationItems;
-(void)setDisambiguationItems:(NSArray *)arg1 ;
@end
