/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <ITMLKit/ITMLKit-Structs.h>
#import <ITMLKit/IKDOMConditional.h>

@class NSArray, NSString, _IKDOMPrototypeDerivationRules;

@interface IKDOMPrototype : IKDOMConditional {

	struct {
		BOOL parsedGrouping;
	}  _flags;
	NSArray* _grouping;
	NSString* _type;
	NSString* _selector;
	_IKDOMPrototypeDerivationRules* _rules;

}

@property (nonatomic,copy,readonly) _IKDOMPrototypeDerivationRules * rules;              //@synthesize rules=_rules - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * selector;                                 //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy,readonly) NSArray * grouping;                                  //@synthesize grouping=_grouping - In the implementation block
+(id)_groupingForDOMElement:(id)arg1 ;
+(id)prototypeWithDOMElement:(id)arg1 ;
-(NSString *)selector;
-(NSArray *)grouping;
-(NSString *)type;
-(_IKDOMPrototypeDerivationRules *)rules;
-(id)variantForDataItem:(id)arg1 ;
-(id)initWithDOMElement:(id)arg1 selector:(id)arg2 ;
-(id)_derivativeWithDataItem:(id)arg1 ;
-(id)instantiateDOMElement;
@end

