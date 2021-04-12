/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSArray, NSSet, IKDOMElement, NSString;

@interface IKDOMConditional : NSObject {

	NSArray* _inclusionExpressions;
	NSArray* _exclusionExpressions;
	NSSet* _dependentPathStrings;
	IKDOMElement* _domElement;
	NSString* _identifier;

}

@property (nonatomic,copy,readonly) NSArray * inclusionExpressions;              //@synthesize inclusionExpressions=_inclusionExpressions - In the implementation block
@property (nonatomic,copy,readonly) NSArray * exclusionExpressions;              //@synthesize exclusionExpressions=_exclusionExpressions - In the implementation block
@property (nonatomic,__weak,readonly) IKDOMElement * domElement;                 //@synthesize domElement=_domElement - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;                //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
-(NSString *)identifier;
-(IKDOMElement *)domElement;
-(NSSet *)dependentPathStrings;
-(NSArray *)inclusionExpressions;
-(NSArray *)exclusionExpressions;
-(id)initWithDOMElement:(id)arg1 ;
-(BOOL)passesForDataItem:(id)arg1 default:(BOOL)arg2 ;
-(void)mutateWithDOMElement:(id)arg1 ;
@end

