/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <AppStoreDaemon/ASDRequestResponse.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface ASDJobSchedulerResponse : ASDRequestResponse <NSCopying, NSSecureCoding> {

	NSArray* _bucketNames;
	NSArray* _currentItems;
	NSArray* _hardFailureItems;
	long long _maxItemCount;
	NSArray* _nextItems;
	NSArray* _skippedItems;
	NSArray* _softFailureItems;

}

@property (copy) NSArray * bucketNames;                           //@synthesize bucketNames=_bucketNames - In the implementation block
@property (readonly) NSArray * currentItems;                      //@synthesize currentItems=_currentItems - In the implementation block
@property (copy) NSArray * hardFailureItems;                      //@synthesize hardFailureItems=_hardFailureItems - In the implementation block
@property (assign,nonatomic) long long maxItemCount;              //@synthesize maxItemCount=_maxItemCount - In the implementation block
@property (copy) NSArray * nextItems;                             //@synthesize nextItems=_nextItems - In the implementation block
@property (copy) NSArray * skippedItems;                          //@synthesize skippedItems=_skippedItems - In the implementation block
@property (copy) NSArray * softFailureItems;                      //@synthesize softFailureItems=_softFailureItems - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithItems:(id)arg1 ;
-(NSArray *)currentItems;
-(NSArray *)bucketNames;
-(void)setBucketNames:(NSArray *)arg1 ;
-(NSArray *)hardFailureItems;
-(void)setHardFailureItems:(NSArray *)arg1 ;
-(long long)maxItemCount;
-(void)setMaxItemCount:(long long)arg1 ;
-(NSArray *)nextItems;
-(void)setNextItems:(NSArray *)arg1 ;
-(NSArray *)skippedItems;
-(void)setSkippedItems:(NSArray *)arg1 ;
-(NSArray *)softFailureItems;
-(void)setSoftFailureItems:(NSArray *)arg1 ;
@end

