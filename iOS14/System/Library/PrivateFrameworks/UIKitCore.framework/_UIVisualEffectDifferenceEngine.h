/*
* Generated on Thursday, January 14, 2021 at 2:20:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_calculateLCSSTable;
-(void)setDestination:(NSArray *)arg1 ;
-(void)_calculateMerge;
-(void)setSource:(NSArray *)arg1 ;
-(id)description;
-(void)_calculate;
-(NSArray *)merged;
-(id)mergeSource:(id)arg1 andDestination:(id)arg2 ;
-(void)_reset;
-(void)_calculatePrefixAndSuffix;
-(NSArray *)destination;
-(void)dealloc;
-(NSArray *)source;
-(id)describeMergeTable;
@end

