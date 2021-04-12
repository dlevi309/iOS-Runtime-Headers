/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSNumber, NSString;

@interface SASportsSeason : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSNumber * currentSeasonYear; 
@property (nonatomic,copy) NSString * relativeSeasonYear; 
@property (nonatomic,copy) NSNumber * seasonYear; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)season;
+(id)seasonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSeasonYear:(NSNumber *)arg1 ;
-(NSNumber *)currentSeasonYear;
-(void)setCurrentSeasonYear:(NSNumber *)arg1 ;
-(NSNumber *)seasonYear;
-(NSString *)relativeSeasonYear;
-(void)setRelativeSeasonYear:(NSString *)arg1 ;
@end

