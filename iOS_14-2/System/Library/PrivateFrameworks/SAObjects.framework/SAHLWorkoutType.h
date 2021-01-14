/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAHLWorkoutType : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * swimmingLocationType; 
@property (nonatomic,copy) NSString * workoutCategory; 
@property (nonatomic,copy) NSString * workoutLocationType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)workoutTypeWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)workoutType;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)workoutLocationType;
-(void)setWorkoutLocationType:(NSString *)arg1 ;
-(NSString *)workoutCategory;
-(void)setWorkoutCategory:(NSString *)arg1 ;
-(void)setSwimmingLocationType:(NSString *)arg1 ;
-(NSString *)swimmingLocationType;
@end

