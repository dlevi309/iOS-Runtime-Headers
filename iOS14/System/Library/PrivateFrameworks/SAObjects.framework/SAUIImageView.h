/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SAAceView.h>

@class NSArray, NSString, SAUIImageResource, NSNumber;

@interface SAUIImageView : SAAceView

@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,copy) NSNumber * tintColor; 
+(id)imageView;
+(id)imageViewWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(void)setTintColor:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(SAUIImageResource *)image;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(NSNumber *)tintColor;
@end

