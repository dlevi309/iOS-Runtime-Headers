/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/


@class NSString, NSArray, INExtensionContextSlotResolutionResult, INIntent, INIntentSlotDescription;

@interface INIntentTestResolvedParameter : NSObject {

	BOOL _resolveImplemented;
	NSString* _parameter;
	NSArray* _results;
	INExtensionContextSlotResolutionResult* _extensionContextResolutionResult;
	INIntent* _intent;
	INIntentSlotDescription* _slotDescription;

}

@property (nonatomic,readonly) INExtensionContextSlotResolutionResult * extensionContextResolutionResult;              //@synthesize extensionContextResolutionResult=_extensionContextResolutionResult - In the implementation block
@property (nonatomic,copy,readonly) INIntent * intent;                                                                 //@synthesize intent=_intent - In the implementation block
@property (nonatomic,readonly) INIntentSlotDescription * slotDescription;                                              //@synthesize slotDescription=_slotDescription - In the implementation block
@property (nonatomic,copy,readonly) NSString * parameter;                                                              //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,readonly) NSArray * results;                                                                      //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) BOOL resolveImplemented;                                                                //@synthesize resolveImplemented=_resolveImplemented - In the implementation block
-(id)description;
-(NSArray *)results;
-(id)dictionaryRepresentation;
-(INIntent *)intent;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)parameter;
-(id)initWithParameter:(id)arg1 forIntent:(id)arg2 extensionContextResolutionResult:(id)arg3 ;
-(BOOL)resolveImplemented;
-(INExtensionContextSlotResolutionResult *)extensionContextResolutionResult;
-(INIntentSlotDescription *)slotDescription;
@end

