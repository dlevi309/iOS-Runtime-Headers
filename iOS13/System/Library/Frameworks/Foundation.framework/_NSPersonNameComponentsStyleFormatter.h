/*
* Generated on Monday, March 1, 2021 at 2:30:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(NSPersonNameComponentsFormatter *)masterFormatter;
-(NSSet *)keysOfInterest;
-(NSArray *)orderedTemplate;
-(long long)ordering;
-(id)_orderedNonEmptyKeysFromComponents:(id)arg1 ;
-(BOOL)fullComponentsAreValid:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)shouldIgnoreComponentsContainingSpecialCharacters;
-(id)_formattedStringFromOrderedKeys:(id)arg1 components:(id)arg2 attributesByRange:(id)arg3 ;
-(BOOL)shouldFallBack;
-(_NSPersonNameComponentsStyleFormatter *)fallbackStyleFormatter;
-(id)stringFromComponents:(id)arg1 attributesByRange:(id)arg2 ;
-(void)setOrdering:(long long)arg1 ;
-(NSArray *)orderedKeysOfInterest;
-(NSSet *)abbreviatedKeys;
-(id)_delimiterBetweenString:(id)arg1 andString:(id)arg2 isPhonetic:(BOOL)arg3 ;
-(void)_releaseIvars;
-(id)initWithMasterFormatter:(id)arg1 ;
-(id)annotatedStringFromPersonNameComponents:(id)arg1 ;
-(NSArray *)fallbackDescriptor;
-(void)setFallbackStyleFormatter:(_NSPersonNameComponentsStyleFormatter *)arg1 ;
@end

