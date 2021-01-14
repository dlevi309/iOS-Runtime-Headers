/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSURL, SAUIAppPunchOut, NSArray;

@interface SAGKLinkedAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSString * displayLink; 
@property (nonatomic,copy) NSURL * link; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,retain) SAUIAppPunchOut * punchOut; 
@property (nonatomic,copy) NSString * query; 
@property (nonatomic,copy) NSURL * searchUri; 
@property (nonatomic,copy) NSArray * thumbnails; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)linkedAnswer;
+(id)linkedAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSURL *)link;
-(NSString *)query;
-(void)setLink:(NSURL *)arg1 ;
-(NSString *)displayLink;
-(void)setDisplayLink:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(NSArray *)thumbnails;
-(SAUIAppPunchOut *)punchOut;
-(void)setSearchUri:(NSURL *)arg1 ;
-(void)setThumbnails:(NSArray *)arg1 ;
-(NSString *)name;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(NSURL *)searchUri;
@end

