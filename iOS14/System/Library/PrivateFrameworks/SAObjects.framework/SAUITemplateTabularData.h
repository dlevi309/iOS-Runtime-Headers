/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAUITemplateBaseItem.h>

@class NSArray, NSString, NSNumber;

@interface SAUITemplateTabularData : SAUITemplateBaseItem

@property (assign,nonatomic) BOOL allowContentScrolling; 
@property (nonatomic,copy) NSArray * columns; 
@property (nonatomic,retain) id<SAUITemplateItem> footerItem; 
@property (nonatomic,retain) id<SAUITemplateItem> headerItem; 
@property (nonatomic,copy) NSString * layoutStyle; 
@property (nonatomic,copy) NSNumber * minimumRowHeight; 
@property (nonatomic,copy) NSArray * rowStyleRules; 
@property (assign,nonatomic) BOOL showHeaderDivider; 
+(id)tabularData;
+(id)tabularDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSArray *)columns;
-(void)setLayoutStyle:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setMinimumRowHeight:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)layoutStyle;
-(BOOL)allowContentScrolling;
-(void)setAllowContentScrolling:(BOOL)arg1 ;
-(id<SAUITemplateItem>)footerItem;
-(void)setFooterItem:(id<SAUITemplateItem>)arg1 ;
-(id<SAUITemplateItem>)headerItem;
-(void)setHeaderItem:(id<SAUITemplateItem>)arg1 ;
-(NSArray *)rowStyleRules;
-(void)setRowStyleRules:(NSArray *)arg1 ;
-(BOOL)showHeaderDivider;
-(void)setShowHeaderDivider:(BOOL)arg1 ;
-(void)setColumns:(NSArray *)arg1 ;
-(NSNumber *)minimumRowHeight;
@end

