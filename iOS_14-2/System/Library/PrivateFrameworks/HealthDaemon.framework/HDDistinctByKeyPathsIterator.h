/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/HDSampleIterator.h>
#import <libobjc.A.dylib/HDRestorableIterator.h>

@protocol HDSampleIteratorHDRestorableIterator;
@class NSArray, NSMutableSet, HKSample, NSString;

@interface HDDistinctByKeyPathsIterator : NSObject <HDSampleIterator, HDRestorableIterator> {

	id<HDSampleIterator><HDRestorableIterator> _sourceIterator;
	NSArray* _keyPaths;
	NSMutableSet* _seenValues;

}

@property (nonatomic,readonly) HKSample * sample; 
@property (nonatomic,readonly) long long objectID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HKSample *)sample;
-(id)init;
-(id)object;
-(long long)objectID;
-(BOOL)advanceWithError:(id*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)restoreIteratorStateFromData:(id)arg1 error:(id*)arg2 ;
-(id)iteratorStateData;
-(id)initWithSourceIterator:(id)arg1 keyPaths:(id)arg2 ;
@end

