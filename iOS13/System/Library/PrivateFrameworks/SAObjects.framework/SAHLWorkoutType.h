/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)workoutType;
+(id)workoutTypeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)workoutLocationType;
-(void)setWorkoutLocationType:(NSString *)arg1 ;
-(id)encodedClassName;
-(void)setSwimmingLocationType:(NSString *)arg1 ;
-(NSString *)swimmingLocationType;
-(NSString *)workoutCategory;
-(void)setWorkoutCategory:(NSString *)arg1 ;
@end

