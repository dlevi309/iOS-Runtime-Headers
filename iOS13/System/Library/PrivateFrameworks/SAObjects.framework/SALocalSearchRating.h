/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SALocalSearchRating : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long count; 
@property (assign,nonatomic) double maxValue; 
@property (nonatomic,copy) NSString * providerId; 
@property (assign,nonatomic) double value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)rating;
+(id)ratingWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)count;
-(void)setCount:(long long)arg1 ;
-(double)value;
-(void)setValue:(double)arg1 ;
-(id)groupIdentifier;
-(NSString *)providerId;
-(void)setProviderId:(NSString *)arg1 ;
-(double)maxValue;
-(void)setMaxValue:(double)arg1 ;
-(id)encodedClassName;
@end

