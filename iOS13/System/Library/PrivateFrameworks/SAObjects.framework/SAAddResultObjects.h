/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSArray;

@interface SAAddResultObjects : SABaseClientBoundCommand

@property (nonatomic,copy) NSArray * objects; 
@property (nonatomic,copy) NSArray * resultObjects; 
+(id)addResultObjects;
+(id)addResultObjectsWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)objects;
-(void)setObjects:(NSArray *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSArray *)resultObjects;
-(void)setResultObjects:(NSArray *)arg1 ;
@end

