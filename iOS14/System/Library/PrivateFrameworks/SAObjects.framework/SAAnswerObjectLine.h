/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSNumber, SAUIImageResource, NSString;

@interface SAAnswerObjectLine : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * image; 
@property (nonatomic,copy) NSNumber * imageInverted; 
@property (nonatomic,retain) SAUIImageResource * imageResource; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectLine;
+(id)objectLineWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setImage:(NSURL *)arg1 ;
-(id)encodedClassName;
-(void)setText:(NSString *)arg1 ;
-(SAUIImageResource *)imageResource;
-(void)setImageResource:(SAUIImageResource *)arg1 ;
-(NSURL *)image;
-(NSString *)text;
-(NSNumber *)imageInverted;
-(void)setImageInverted:(NSNumber *)arg1 ;
@end

