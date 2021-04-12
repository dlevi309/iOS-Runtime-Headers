/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAISearchCompleted : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * results; 
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)searchCompleted;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

