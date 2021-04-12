/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(NSString *)query;
-(void)setName:(NSString *)arg1 ;
-(void)setQuery:(NSString *)arg1 ;
-(id)groupIdentifier;
-(void)setPunchOut:(SAUIAppPunchOut *)arg1 ;
-(NSURL *)link;
-(void)setLink:(NSURL *)arg1 ;
-(SAUIAppPunchOut *)punchOut;
-(NSString *)displayLink;
-(void)setDisplayLink:(NSString *)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSURL *)searchUri;
-(void)setSearchUri:(NSURL *)arg1 ;
-(NSArray *)thumbnails;
-(void)setThumbnails:(NSArray *)arg1 ;
@end

