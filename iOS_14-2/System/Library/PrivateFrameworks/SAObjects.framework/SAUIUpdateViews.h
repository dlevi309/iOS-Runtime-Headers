/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUpdateViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * views; 
+(id)updateViewsWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)updateViews;
-(id)groupIdentifier;
-(void)setViews:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)views;
@end

