/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSNumber *)currentSeasonYear;
-(void)setCurrentSeasonYear:(NSNumber *)arg1 ;
-(NSString *)relativeSeasonYear;
-(void)setRelativeSeasonYear:(NSString *)arg1 ;
-(NSNumber *)seasonYear;
-(void)setSeasonYear:(NSNumber *)arg1 ;
@end

