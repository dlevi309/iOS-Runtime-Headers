/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSData, NSArray;

@interface SACardSnippet : SAUISnippet

@property (nonatomic,copy) NSData * cardData; 
@property (nonatomic,copy) NSArray * contextItems; 
@property (nonatomic,copy) NSArray * referencedCommands; 
@property (nonatomic,copy) NSArray * referencedSnippets; 
+(id)snippet;
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)cardData;
-(id)encodedClassName;
-(void)setCardData:(NSData *)arg1 ;
-(NSArray *)contextItems;
-(void)setContextItems:(NSArray *)arg1 ;
-(NSArray *)referencedCommands;
-(void)setReferencedCommands:(NSArray *)arg1 ;
-(NSArray *)referencedSnippets;
-(void)setReferencedSnippets:(NSArray *)arg1 ;
@end

