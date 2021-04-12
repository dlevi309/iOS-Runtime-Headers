/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SACalendarEventSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * results; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)eventSearchCompleted;
+(id)eventSearchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)eventSearchCompletedWithResults:(id)arg1 ;
-(NSArray *)results;
-(id)groupIdentifier;
-(void)setResults:(NSArray *)arg1 ;
-(id)initWithResults:(id)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

