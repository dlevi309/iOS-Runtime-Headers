/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSNumber, NSArray, NSURL, NSString;

@interface SAFmfSearchCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSArray * fmfLocations; 
@property (nonatomic,copy) NSURL * searchContext; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)searchCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)searchCompleted;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(NSArray *)fmfLocations;
-(void)setFmfLocations:(NSArray *)arg1 ;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
@end

