/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class SAUIConfirmationOptions, SAUISash, NSString;

@interface SAUISnippet : SAAceView

@property (assign,nonatomic) long long category; 
@property (nonatomic,retain) SAUIConfirmationOptions * confirmationOptions; 
@property (nonatomic,retain) SAUISash * sash; 
@property (nonatomic,copy) NSString * subtitle; 
@property (nonatomic,copy) NSString * summaryTitle; 
@property (nonatomic,copy) NSString * title; 
+(id)snippetWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)snippet;
-(void)setCategory:(long long)arg1 ;
-(id)groupIdentifier;
-(SAUISash *)sash;
-(id)encodedClassName;
-(NSString *)subtitle;
-(void)setTitle:(NSString *)arg1 ;
-(long long)category;
-(SAUIConfirmationOptions *)confirmationOptions;
-(void)setConfirmationOptions:(SAUIConfirmationOptions *)arg1 ;
-(NSString *)summaryTitle;
-(void)setSummaryTitle:(NSString *)arg1 ;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setSash:(SAUISash *)arg1 ;
-(NSString *)title;
@end

