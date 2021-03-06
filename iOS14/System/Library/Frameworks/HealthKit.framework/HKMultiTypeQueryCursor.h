/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, HKQueryAnchor, NSData;

@interface HKMultiTypeQueryCursor : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _sampleQueryDescriptions;
	NSArray* _sortDescriptors;
	HKQueryAnchor* _followingAnchor;
	HKQueryAnchor* _upToAndIncludingAnchor;
	NSArray* _distinctByKeyPaths;
	NSData* _state;

}

@property (nonatomic,copy,readonly) NSArray * sampleQueryDescriptions; 
@property (nonatomic,copy,readonly) NSArray * sortDescriptors; 
@property (nonatomic,copy,readonly) HKQueryAnchor * followingAnchor; 
@property (nonatomic,copy,readonly) HKQueryAnchor * upToAndIncludingAnchor; 
@property (nonatomic,copy,readonly) NSArray * distinctByKeyPaths; 
@property (nonatomic,copy,readonly) NSData * state; 
+(BOOL)supportsSecureCoding;
-(id)initWithSampleQueryDescriptions:(id)arg1 sortDescriptors:(id)arg2 followingAnchor:(id)arg3 upToAndIncludingAnchor:(id)arg4 distinctByKeyPaths:(id)arg5 state:(id)arg6 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)sortDescriptors;
-(NSArray *)sampleQueryDescriptions;
-(HKQueryAnchor *)followingAnchor;
-(HKQueryAnchor *)upToAndIncludingAnchor;
-(NSArray *)distinctByKeyPaths;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)state;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

