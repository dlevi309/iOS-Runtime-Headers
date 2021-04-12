/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSNumber, NSArray, NSString, NSURL;

@interface SAFmfLocationSnippet : SAUISnippet

@property (nonatomic,copy) NSNumber * atRequestedLocation; 
@property (nonatomic,copy) NSArray * locations; 
@property (nonatomic,copy) NSString * proximity; 
@property (nonatomic,copy) NSURL * searchContext; 
+(id)locationSnippet;
+(id)locationSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)proximity;
-(void)setLocations:(NSArray *)arg1 ;
-(NSURL *)searchContext;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSArray *)locations;
-(id)encodedClassName;
-(void)setProximity:(NSString *)arg1 ;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
@end

