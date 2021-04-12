/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray, NSDate, NSURL;

@interface SAAnswerAbstractSocialPost : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * author; 
@property (nonatomic,copy) NSString * authorTitle; 
@property (nonatomic,copy) NSArray * comments; 
@property (nonatomic,copy) NSDate * dateCreated; 
@property (nonatomic,copy) NSDate * dateModified; 
@property (nonatomic,copy) NSURL * icon; 
@property (assign,nonatomic) long long rank; 
@property (nonatomic,copy) NSString * text; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)abstractSocialPost;
+(id)abstractSocialPostWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setRank:(long long)arg1 ;
-(NSString *)author;
-(void)setAuthor:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSDate *)dateCreated;
-(NSArray *)comments;
-(NSURL *)icon;
-(void)setComments:(NSArray *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)setIcon:(NSURL *)arg1 ;
-(void)setDateCreated:(NSDate *)arg1 ;
-(NSString *)authorTitle;
-(void)setAuthorTitle:(NSString *)arg1 ;
-(NSString *)text;
-(long long)rank;
-(void)setDateModified:(NSDate *)arg1 ;
-(NSDate *)dateModified;
-(NSString *)title;
@end

