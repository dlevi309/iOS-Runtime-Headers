/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/


#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
@class NSMutableArray;

@interface DDResultTracker : NSObject {

	unsigned countRemainingByCategory[6];
	unsigned totalCountRemaining;
	BOOL sortByProximity;
	unsigned long long referenceResultLocation;
	unsigned long long maximumDistanceForEmails;
	unsigned long long maximumDistance;
	_DDResult* existingAddressResult;
	NSMutableArray* resultsBefore;
	NSMutableArray* resultsAfter;
	_DDResult* referenceResult;

}

@property (readonly) unsigned totalCountRemaining; 
@property (assign) unsigned long long maximumDistanceForEmails; 
@property (assign) unsigned long long maximumDistance; 
-(id)results;
-(void)setMaximumDistance:(unsigned long long)arg1 ;
-(unsigned long long)maximumDistance;
-(void)dealloc;
-(id)initWithReferenceResult:(_DDResult*)arg1 ;
-(BOOL)addResultIfAppropriate:(_DDResult*)arg1 ;
-(unsigned)totalCountRemaining;
-(unsigned long long)maximumDistanceForEmails;
-(void)setMaximumDistanceForEmails:(unsigned long long)arg1 ;
@end

