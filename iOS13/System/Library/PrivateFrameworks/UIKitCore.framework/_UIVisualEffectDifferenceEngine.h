/*
* Generated on Monday, March 1, 2021 at 2:30:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSArray;

@interface _UIVisualEffectDifferenceEngine : NSObject {

	long long _sourceCount;
	long long _destinationCount;
	long long _prefixCount;
	long long _suffixCount;
	long long _innerSourceCount;
	long long _innerDestinationCount;
	long long* _mergeTable;
	NSArray* _merged;
	NSArray* _source;
	NSArray* _destination;

}

@property (nonatomic,copy) NSArray * source;                       //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSArray * destination;                  //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy,readonly) NSArray * merged; 
-(void)dealloc;
-(id)description;
-(void)setSource:(NSArray *)arg1 ;
-(NSArray *)source;
-(void)_reset;
-(NSArray *)destination;
-(void)setDestination:(NSArray *)arg1 ;
-(id)mergeSource:(id)arg1 andDestination:(id)arg2 ;
-(void)_calculatePrefixAndSuffix;
-(void)_calculateLCSSTable;
-(void)_calculateMerge;
-(void)_calculate;
-(NSArray *)merged;
-(id)describeMergeTable;
@end

