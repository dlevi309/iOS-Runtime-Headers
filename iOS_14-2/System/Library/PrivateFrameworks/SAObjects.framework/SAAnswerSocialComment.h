/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSDate;

@interface SAAnswerSocialComment : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSDate * date; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)socialComment;
+(id)socialCommentWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setText:(NSString *)arg1 ;
-(void)setDate:(NSDate *)arg1 ;
-(NSString *)text;
-(NSDate *)date;
@end

