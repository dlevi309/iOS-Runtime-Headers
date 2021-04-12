/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSampleIterator.h>
#import <libobjc.A.dylib/HDRestorableIterator.h>

@protocol HDSampleIteratorHDRestorableIterator;
@class NSArray, NSMutableSet, NSString, HKSample;

@interface HDDistinctByKeyPathsIterator : NSObject <HDSampleIterator, HDRestorableIterator> {

	id<HDSampleIterator><HDRestorableIterator> _sourceIterator;
	NSArray* _keyPaths;
	NSMutableSet* _seenValues;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) HKSample * sample; 
@property (nonatomic,readonly) long long objectID; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)object;
-(long long)objectID;
-(HKSample *)sample;
-(BOOL)advanceWithError:(id*)arg1 ;
-(BOOL)restoreIteratorStateFromData:(id)arg1 error:(id*)arg2 ;
-(id)iteratorStateData;
-(id)initWithSourceIterator:(id)arg1 keyPaths:(id)arg2 ;
@end

