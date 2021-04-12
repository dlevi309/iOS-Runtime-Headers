/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class NSMutableArray, NSMutableSet, NSArray;

@interface ARCircularArray : NSObject {

	NSMutableArray* _objectsArray;
	NSMutableSet* _objectsSet;
	long long _latestIndex;
	long long _capacity;

}

@property (readonly) NSArray * contents; 
-(id)initWithCapacity:(long long)arg1 ;
-(long long)count;
-(NSArray *)contents;
-(BOOL)contains:(id)arg1 ;
-(id)add:(id)arg1 ;
-(id)peekLatest;
@end

