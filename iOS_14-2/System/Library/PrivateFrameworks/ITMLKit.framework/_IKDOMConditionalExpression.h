/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/


@class NSArray, NSSet;

@interface _IKDOMConditionalExpression : NSObject {

	BOOL _isNegated;
	NSArray* _operations;
	NSSet* _dependentPathStrings;

}

@property (nonatomic,copy,readonly) NSSet * dependentPathStrings;              //@synthesize dependentPathStrings=_dependentPathStrings - In the implementation block
+(id)expressionFromString:(id)arg1 ;
+(id)parseExpressionsFromString:(id)arg1 ;
-(BOOL)passesForDataItem:(id)arg1 ;
-(id)initWithOperations:(id)arg1 dependentPathStrings:(id)arg2 isNegated:(BOOL)arg3 ;
-(NSSet *)dependentPathStrings;
@end

