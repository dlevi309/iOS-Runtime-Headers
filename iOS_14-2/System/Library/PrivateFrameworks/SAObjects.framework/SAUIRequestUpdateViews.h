/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray, NSNumber;

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSNumber * timeInSeconds; 
@property (nonatomic,copy) NSArray * viewIds; 
+(id)requestUpdateViews;
+(id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)timeInSeconds;
-(NSArray *)commands;
-(void)setTimeInSeconds:(NSNumber *)arg1 ;
-(void)setViewIds:(NSArray *)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSArray *)viewIds;
@end

