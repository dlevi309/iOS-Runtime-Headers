/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate, NSNumber, NSArray, NSDictionary;

@interface SAFetchActivityStream : SABaseClientBoundCommand <SAAceSerializable>

@property (nonatomic,copy) NSString * activityType; 
@property (assign,nonatomic) BOOL ascending; 
@property (nonatomic,copy) NSDate * fromDate; 
@property (nonatomic,copy) NSNumber * limit; 
@property (nonatomic,copy) NSArray * matchingMetadataKeys; 
@property (nonatomic,copy) NSDictionary * matchingMetadataKeysAndStringValues; 
@property (nonatomic,copy) NSString * sortBy; 
@property (nonatomic,copy) NSArray * streamTypes; 
@property (nonatomic,copy) NSString * taskType; 
@property (nonatomic,copy) NSDate * toDate; 
@property (nonatomic,copy) NSString * visibility; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchActivityStream;
+(id)fetchActivityStreamWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)ascending;
-(void)setVisibility:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)activityType;
-(NSString *)visibility;
-(NSNumber *)limit;
-(void)setLimit:(NSNumber *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(void)setTaskType:(NSString *)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(NSString *)sortBy;
-(void)setSortBy:(NSString *)arg1 ;
-(NSString *)taskType;
-(id)encodedClassName;
-(NSDate *)toDate;
-(NSDate *)fromDate;
-(void)setFromDate:(NSDate *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(BOOL)requiresResponse;
-(NSArray *)matchingMetadataKeys;
-(void)setMatchingMetadataKeys:(NSArray *)arg1 ;
-(NSDictionary *)matchingMetadataKeysAndStringValues;
-(void)setMatchingMetadataKeysAndStringValues:(NSDictionary *)arg1 ;
-(NSArray *)streamTypes;
-(void)setStreamTypes:(NSArray *)arg1 ;
@end

