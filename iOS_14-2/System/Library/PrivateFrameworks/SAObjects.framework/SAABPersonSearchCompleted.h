/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAABPersonSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * results; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)personSearchCompleted;
+(id)personSearchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)personSearchCompletedWithResults:(id)arg1 ;
-(void)setResults:(NSArray *)arg1 ;
-(NSArray *)results;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithResults:(id)arg1 ;
@end

