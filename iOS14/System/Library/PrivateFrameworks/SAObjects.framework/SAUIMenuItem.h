/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSURL, NSString;

@interface SAUIMenuItem : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSURL * icon; 
@property (nonatomic,copy) NSURL * ref; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * title; 
+(id)menuItem;
+(id)menuItemWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)ref;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSURL *)icon;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(void)setIcon:(NSURL *)arg1 ;
-(NSArray *)commands;
-(void)setRef:(NSURL *)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(NSString *)title;
@end

