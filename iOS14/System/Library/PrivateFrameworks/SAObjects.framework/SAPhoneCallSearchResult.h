/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSNumber *)isNew;
-(SAPersonAttribute *)contact;
-(void)setContact:(SAPersonAttribute *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setIsNew:(NSNumber *)arg1 ;
-(void)setCallTime:(NSDate *)arg1 ;
-(NSDate *)callTime;
@end

