/*
* Generated on Thursday, January 14, 2021 at 2:20:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSSet, NSLocale, NSArray, NSPersonNameComponentsFormatter;

@interface _NSPersonNameComponentsStyleFormatter : NSObject {

	NSSet* _abbreviatedKeys;
	_NSPersonNameComponentsStyleFormatter* _fallbackStyleFormatter;
	NSSet* _keysOfInterest;
	BOOL _shouldFallBack;
	BOOL _isEnabled;
	long long _ordering;
	NSLocale* _locale;
	NSArray* _orderedTemplate;
	NSArray* _fallbackDescriptor;
	NSPersonNameComponentsFormatter* _masterFormatter;

}

@property (readonly) NSSet * abbreviatedKeys; 
@property (readonly) NSSet * keysOfInterest; 
@property (readonly) NSArray * orderedTemplate; 
@property (readonly) NSArray * orderedKeysOfInterest; 
@property (assign) long long ordering; 
@property (readonly) BOOL shouldFallBack; 
@property (readonly) BOOL isEnabled; 
@property (readonly) BOOL shouldIgnoreComponentsContainingSpecialCharacters; 
@property (retain) _NSPersonNameComponentsStyleFormatter * fallbackStyleFormatter;              //@synthesize fallbackStyleFormatter=_fallbackStyleFormatter - In the implementation block
@property (copy,readonly) NSArray * fallbackDescriptor; 
@property (copy,readonly) NSPersonNameComponentsFormatter * masterFormatter;                    //@synthesize masterFormatter=_masterFormatter - In the implementation block
-(id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3 ;
-(_NSPersonNameComponentsStyleFormatter *)fallbackStyleFormatter;
-(id)annotatedStringFromPersonNameComponents:(id)arg1 ;
-(id)stringFromComponents:(id)arg1 attributesByRange:(id)arg2 ;
-(id)_orderedNonEmptyKeysFromComponents:(id)arg1 ;
-(NSArray *)orderedKeysOfInterest;
-(void)setOrdering:(long long)arg1 ;
-(void)_releaseIvars;
-(NSSet *)keysOfInterest;
-(NSPersonNameComponentsFormatter *)masterFormatter;
-(void)setFallbackStyleFormatter:(_NSPersonNameComponentsStyleFormatter *)arg1 ;
-(id)_delimiterBetweenString:(id)arg1 andString:(id)arg2 isPhonetic:(BOOL)arg3 ;
-(id)initWithMasterFormatter:(id)arg1 ;
-(long long)ordering;
-(BOOL)shouldIgnoreComponentsContainingSpecialCharacters;
-(BOOL)fullComponentsAreValid:(id)arg1 ;
-(NSArray *)fallbackDescriptor;
-(BOOL)isEnabled;
-(NSArray *)orderedTemplate;
-(NSSet *)abbreviatedKeys;
-(BOOL)shouldFallBack;
-(void)dealloc;
@end

