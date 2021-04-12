/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASportsSnippet.h>

@class NSArray;

@interface SASportsStandingsSnippet : SASportsSnippet

@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,copy) NSArray * entities; 
@property (nonatomic,copy) NSArray * selectedEntities; 
@property (assign,nonatomic) BOOL showCardinalPositions; 
+(id)standingsSnippet;
+(id)standingsSnippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)columns;
-(NSArray *)entities;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setColumns:(NSArray *)arg1 ;
-(NSArray *)selectedEntities;
-(void)setSelectedEntities:(NSArray *)arg1 ;
-(BOOL)showCardinalPositions;
-(void)setShowCardinalPositions:(BOOL)arg1 ;
-(void)setEntities:(NSArray *)arg1 ;
@end

