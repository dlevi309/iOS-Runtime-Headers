/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAUIColor, NSArray, SAUIImageResource;

@interface SAUISash : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * applicationBundleIdentifier; 
@property (nonatomic,retain) SAUIColor * backgroundColor; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,retain) SAUIImageResource * image; 
@property (nonatomic,retain) SAUIColor * textColor; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sash;
+(id)sashWithDictionary:(id)arg1 context:(id)arg2 ;
-(SAUIColor *)textColor;
-(id)groupIdentifier;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(id)encodedClassName;
-(void)setTitle:(NSString *)arg1 ;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(SAUIImageResource *)image;
-(SAUIColor *)backgroundColor;
-(NSArray *)commands;
-(void)setTextColor:(SAUIColor *)arg1 ;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(void)setCommands:(NSArray *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSString *)title;
@end

