/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSDate *)toDate;
-(void)setLimit:(NSNumber *)arg1 ;
-(void)setActivityType:(NSString *)arg1 ;
-(NSNumber *)limit;
-(id)groupIdentifier;
-(NSString *)visibility;
-(NSString *)activityType;
-(NSString *)sortBy;
-(void)setTaskType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setVisibility:(NSString *)arg1 ;
-(void)setAscending:(BOOL)arg1 ;
-(NSString *)taskType;
-(BOOL)ascending;
-(NSArray *)matchingMetadataKeys;
-(void)setMatchingMetadataKeys:(NSArray *)arg1 ;
-(NSDictionary *)matchingMetadataKeysAndStringValues;
-(void)setMatchingMetadataKeysAndStringValues:(NSDictionary *)arg1 ;
-(NSArray *)streamTypes;
-(void)setStreamTypes:(NSArray *)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSDate *)fromDate;
-(void)setSortBy:(NSString *)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
@end

