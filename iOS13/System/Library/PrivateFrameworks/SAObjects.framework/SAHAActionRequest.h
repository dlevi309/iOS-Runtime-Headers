/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(void)setFilter:(SAHAFilter *)arg1 ;
-(SAHAFilter *)filter;
-(NSArray *)actions;
-(void)setActions:(NSArray *)arg1 ;
-(id)encodedClassName;
-(long long)executionOrder;
-(void)setExecutionOrder:(long long)arg1 ;
@end

