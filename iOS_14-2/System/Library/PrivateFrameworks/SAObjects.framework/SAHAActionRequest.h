/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, SAHAFilter;

@interface SAHAActionRequest : SADomainObject

@property (nonatomic,copy) NSArray * actions; 
@property (assign,nonatomic) long long executionOrder; 
@property (nonatomic,retain) SAHAFilter * filter; 
+(id)actionRequest;
+(id)actionRequestWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setActions:(NSArray *)arg1 ;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(SAHAFilter *)filter;
-(id)groupIdentifier;
-(NSArray *)actions;
-(id)encodedClassName;
-(long long)executionOrder;
-(void)setExecutionOrder:(long long)arg1 ;
@end

