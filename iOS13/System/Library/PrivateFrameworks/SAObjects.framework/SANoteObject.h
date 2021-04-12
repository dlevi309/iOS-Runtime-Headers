/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setContents:(NSString *)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
-(NSDate *)createdDate;
-(void)setCreatedDate:(NSDate *)arg1 ;
-(void)setRestricted:(BOOL)arg1 ;
-(id)encodedClassName;
-(BOOL)restricted;
@end

