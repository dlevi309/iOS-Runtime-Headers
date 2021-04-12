/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>
#import <SAObjects/SAUITemplateItemGroup.h>

@class NSArray, NSString, SAUITemplateEdgeInsets;

@interface SAUITemplateBaseItemGroup : SAUITemplateBaseItem <SAUITemplateItemGroup>

@property (nonatomic,copy) NSArray * templateItems; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * communicationOptions; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * fullScreenPaddingDelta; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
@property (nonatomic,retain) SAUITemplateEdgeInsets * padding; 
@property (nonatomic,copy) NSArray * presentationOptions; 
@property (assign,nonatomic) BOOL shouldBeOffscreenInPartial; 
+(id)baseItemGroup;
+(id)baseItemGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)templateItems;
-(void)setTemplateItems:(NSArray *)arg1 ;
@end

