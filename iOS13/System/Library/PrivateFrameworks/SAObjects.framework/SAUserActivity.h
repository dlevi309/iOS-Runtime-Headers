/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAUserActivity : SADomainObject

@property (nonatomic,copy) NSArray * eligibileFunctions; 
@property (nonatomic,copy) NSString * internalGUID; 
@property (assign,nonatomic) BOOL isEligibleForAppPunchout; 
@property (assign,nonatomic) BOOL isEligibleForDirections; 
@property (assign,nonatomic) BOOL isEligibleForHandoff; 
@property (assign,nonatomic) BOOL isEligibleForPublicIndexing; 
@property (assign,nonatomic) BOOL isEligibleForReminders; 
@property (assign,nonatomic) BOOL isEligibleForSearch; 
+(id)userActivity;
+(id)userActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(BOOL)isEligibleForHandoff;
-(BOOL)isEligibleForSearch;
-(BOOL)isEligibleForPublicIndexing;
-(id)encodedClassName;
-(NSString *)internalGUID;
-(void)setInternalGUID:(NSString *)arg1 ;
-(BOOL)isEligibleForReminders;
-(NSArray *)eligibileFunctions;
-(void)setEligibileFunctions:(NSArray *)arg1 ;
-(BOOL)isEligibleForAppPunchout;
-(void)setIsEligibleForAppPunchout:(BOOL)arg1 ;
-(BOOL)isEligibleForDirections;
-(void)setIsEligibleForDirections:(BOOL)arg1 ;
-(void)setIsEligibleForHandoff:(BOOL)arg1 ;
-(void)setIsEligibleForPublicIndexing:(BOOL)arg1 ;
-(void)setIsEligibleForReminders:(BOOL)arg1 ;
-(void)setIsEligibleForSearch:(BOOL)arg1 ;
@end

