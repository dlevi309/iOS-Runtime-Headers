/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSecondaryTitle:(NSString *)arg1 ;
-(SAUIImageResource *)thumbnail;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)titleMaxLines;
-(void)setTitleMaxLines:(NSNumber *)arg1 ;
-(void)setFootnote:(NSString *)arg1 ;
-(void)setDescriptions:(NSArray *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(SAUIAppPunchOut *)actionButton;
-(void)setActionButton:(SAUIAppPunchOut *)arg1 ;
-(NSArray *)descriptions;
-(NSString *)footnote;
-(BOOL)centered;
-(NSString *)secondaryTitle;
-(void)setThumbnail:(SAUIImageResource *)arg1 ;
-(NSString *)title;
@end

