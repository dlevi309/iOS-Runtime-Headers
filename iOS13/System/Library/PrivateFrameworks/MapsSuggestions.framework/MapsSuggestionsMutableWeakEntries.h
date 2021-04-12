/*
* Generated on Monday, March 1, 2021 at 2:33:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/


@class NSPointerArray, NSArray;

@interface MapsSuggestionsMutableWeakEntries : NSObject {

	NSPointerArray* _array;
	BOOL _dirty;

}

@property (nonatomic,readonly) NSArray * strongArray; 
@property (nonatomic,readonly) unsigned long long count; 
-(id)init;
-(unsigned long long)count;
-(id)initWithEntries:(id)arg1 ;
-(NSArray *)strongArray;
-(void)addWeakObject:(id)arg1 ;
-(id)weakObjectAtIndex:(unsigned long long)arg1 ;
@end

