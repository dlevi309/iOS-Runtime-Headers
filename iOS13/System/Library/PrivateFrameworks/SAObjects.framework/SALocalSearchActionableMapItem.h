/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SALocalSearchMapItem.h>

@class NSArray;

@interface SALocalSearchActionableMapItem : SALocalSearchMapItem

@property (nonatomic,copy) NSArray * commands; 
+(id)actionableMapItem;
+(id)actionableMapItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

