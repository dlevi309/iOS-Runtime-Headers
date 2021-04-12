/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAHLShowActivity : SADomainCommand

@property (nonatomic,copy) NSString * activityDataType; 
@property (nonatomic,copy) NSString * activityView; 
+(id)showActivity;
+(id)showActivityWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)activityView;
-(void)setActivityView:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)activityDataType;
-(void)setActivityDataType:(NSString *)arg1 ;
@end

