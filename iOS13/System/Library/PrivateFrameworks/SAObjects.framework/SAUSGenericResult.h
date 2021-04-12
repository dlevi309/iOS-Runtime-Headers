/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class SAUIAppPunchOut, NSArray, NSString, SAUIImageResource, NSNumber;

@interface SAUSGenericResult : SADomainObject

@property (nonatomic,retain) SAUIAppPunchOut * actionButton; 
@property (assign,nonatomic) BOOL centered; 
@property (nonatomic,copy) NSArray * descriptions; 
@property (nonatomic,copy) NSString * footnote; 
@property (nonatomic,copy) NSString * secondaryTitle; 
@property (nonatomic,retain) SAUIImageResource * thumbnail; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSNumber * titleMaxLines; 
+(id)genericResult;
+(id)genericResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SAUIImageResource *)thumbnail;
-(void)setThumbnail:(SAUIImageResource *)arg1 ;
-(NSString *)footnote;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(NSString *)secondaryTitle;
-(NSArray *)descriptions;
-(void)setDescriptions:(NSArray *)arg1 ;
-(SAUIAppPunchOut *)actionButton;
-(id)encodedClassName;
-(void)setActionButton:(SAUIAppPunchOut *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(BOOL)centered;
-(NSNumber *)titleMaxLines;
-(void)setTitleMaxLines:(NSNumber *)arg1 ;
@end

