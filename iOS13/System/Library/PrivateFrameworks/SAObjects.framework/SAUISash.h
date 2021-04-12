/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(SAUIImageResource *)image;
-(void)setImage:(SAUIImageResource *)arg1 ;
-(SAUIColor *)backgroundColor;
-(void)setBackgroundColor:(SAUIColor *)arg1 ;
-(void)setTextColor:(SAUIColor *)arg1 ;
-(SAUIColor *)textColor;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

