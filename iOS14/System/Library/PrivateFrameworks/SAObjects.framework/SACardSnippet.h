/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUISnippet.h>

@class NSData, NSArray;

@interface SACardSnippet : SAUISnippet

@property (nonatomic,copy) NSData * cardData; 
@property (nonatomic,copy) NSData * compactSizeCardData; 
@property (nonatomic,copy) NSArray * contextItems; 
@property (nonatomic,copy) NSArray * referencedCommands; 
@property (nonatomic,copy) NSArray * referencedSnippets; 
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)snippet;
-(id)groupIdentifier;
-(void)setCardData:(NSData *)arg1 ;
-(id)encodedClassName;
-(NSData *)cardData;
-(NSData *)compactSizeCardData;
-(void)setCompactSizeCardData:(NSData *)arg1 ;
-(NSArray *)contextItems;
-(void)setContextItems:(NSArray *)arg1 ;
-(NSArray *)referencedCommands;
-(void)setReferencedCommands:(NSArray *)arg1 ;
-(NSArray *)referencedSnippets;
-(void)setReferencedSnippets:(NSArray *)arg1 ;
@end

