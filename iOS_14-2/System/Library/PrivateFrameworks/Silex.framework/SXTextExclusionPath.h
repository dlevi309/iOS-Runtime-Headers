/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@class NSString, SXTextExclusionPathWrapper;

@interface SXTextExclusionPath : NSObject {

	BOOL _fullBleed;
	int _type;
	int _lineVerticalAlignment;
	double _padding;
	double _verticalAlignmentFactor;
	NSString* _componentIdentifier;
	/*^block*/id _startBlock;
	/*^block*/id _minYBlock;
	/*^block*/id _completionBlock;
	SXTextExclusionPathWrapper* _wrapper;
	CGPoint _actualPosition;
	CGPoint _position;
	CGPoint _anchorPoint;
	NSRange _range;
	UIEdgeInsets _insets;
	CGRect _exclusionRect;

}
-(id)description;
@end

