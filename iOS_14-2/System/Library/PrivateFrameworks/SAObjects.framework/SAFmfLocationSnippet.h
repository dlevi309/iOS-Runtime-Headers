/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)locations;
-(void)setLocations:(NSArray *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)proximity;
-(NSNumber *)atRequestedLocation;
-(void)setAtRequestedLocation:(NSNumber *)arg1 ;
-(void)setSearchContext:(NSURL *)arg1 ;
-(NSURL *)searchContext;
-(void)setProximity:(NSString *)arg1 ;
@end

