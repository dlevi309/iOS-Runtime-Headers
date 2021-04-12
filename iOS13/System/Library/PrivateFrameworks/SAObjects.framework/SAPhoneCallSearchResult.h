/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSDate, SAPersonAttribute, NSNumber;

@interface SAPhoneCallSearchResult : SADomainObject

@property (nonatomic,copy) NSDate * callTime; 
@property (nonatomic,retain) SAPersonAttribute * contact; 
@property (nonatomic,copy) NSNumber * isNew; 
+(id)callSearchResult;
+(id)callSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAPersonAttribute *)contact;
-(void)setContact:(SAPersonAttribute *)arg1 ;
-(NSNumber *)isNew;
-(id)encodedClassName;
-(void)setIsNew:(NSNumber *)arg1 ;
-(NSDate *)callTime;
-(void)setCallTime:(NSDate *)arg1 ;
@end

