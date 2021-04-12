/*
* Generated on Thursday, January 14, 2021 at 2:22:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreAutoLayout.framework/CoreAutoLayout
*/


@protocol NSLayoutItem;
#import <CoreAutoLayout/CoreAutoLayout-Structs.h>
@class NSString, NSDictionary, NSMutableArray;

@interface NSLayoutConstraintParser : NSObject {

	NSString* _line;
	const char* _lineChars;
	unsigned long long _lineLength;
	unsigned long long _opts;
	BOOL _useHorizontalArrangement;
	NSDictionary* _metrics;
	NSDictionary* _views;
	id<NSLayoutItem> _containerView;
	NSMutableArray* _constraints;
	NSMutableArray* _unflushedWidthConstraints;
	NSMutableArray* _alignmentConstraints;
	unsigned long long _currentCharacter;
	NSMutableArray* _incompleteConstraints;
	id<NSLayoutItem> _parsedLeftView;
	id<NSLayoutItem> _parsedRightView;
	id<NSLayoutItem> _parsedConstrainedWidthView;

}
+(id)constraintsWithVisualFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(void)parse;
-(id)constraints;
-(void)parsePredicate;
-(void)parsePredicateList;
-(void)parseOp;
-(void)flushWidthConstraints;
-(void)parsePredicateWithParentheses;
-(id)parseView;
-(id)initWithFormat:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
-(void)finishConstraint;
-(void)findContainerView;
-(id)description;
-(double)parseConstant;
-(NSRange)rangeOfName;
-(void)parseConnection;
-(void)failWithDescription:(id)arg1 ;
-(void)dealloc;
@end

