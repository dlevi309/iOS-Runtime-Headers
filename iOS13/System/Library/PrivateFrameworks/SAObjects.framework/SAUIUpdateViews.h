/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAUIUpdateViews : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * views; 
+(id)updateViews;
+(id)updateViewsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)views;
-(id)encodedClassName;
-(void)setViews:(NSArray *)arg1 ;
-(BOOL)requiresResponse;
@end

