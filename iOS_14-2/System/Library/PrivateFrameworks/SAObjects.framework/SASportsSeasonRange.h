/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSDate, NSString;

@interface SASportsSeasonRange : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSDate * end; 
@property (nonatomic,copy) NSString * seasonType; 
@property (nonatomic,copy) NSDate * start; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)seasonRange;
+(id)seasonRangeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSDate *)end;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)start;
-(void)setEnd:(NSDate *)arg1 ;
-(void)setStart:(NSDate *)arg1 ;
-(NSString *)seasonType;
-(void)setSeasonType:(NSString *)arg1 ;
@end

