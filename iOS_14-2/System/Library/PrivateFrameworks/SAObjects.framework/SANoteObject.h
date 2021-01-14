/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDate;

@interface SANoteObject : SADomainObject

@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,copy) NSDate * createdDate; 
@property (nonatomic,copy) NSDate * lastModifiedDate; 
@property (assign,nonatomic) BOOL restricted; 
@property (nonatomic,copy) NSString * title; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)contents;
-(id)groupIdentifier;
-(void)setRestricted:(BOOL)arg1 ;
-(id)encodedClassName;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setTitle:(NSString *)arg1 ;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(BOOL)restricted;
-(NSDate *)createdDate;
-(void)setContents:(NSString *)arg1 ;
-(NSString *)title;
@end

