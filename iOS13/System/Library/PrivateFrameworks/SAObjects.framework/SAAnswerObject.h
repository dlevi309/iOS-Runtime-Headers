/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString;

@interface SAAnswerObject : SADomainObject

@property (nonatomic,copy) NSArray * lines; 
@property (nonatomic,copy) NSString * title; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSArray *)lines;
-(void)setLines:(NSArray *)arg1 ;
-(id)encodedClassName;
@end

