/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SANodeIntent : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * matchingSpans; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSArray * privacyPolicy; 
@property (nonatomic,retain) id<SAAceSerializable> value; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nodeIntent;
+(id)nodeIntentWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(id<SAAceSerializable>)value;
-(void)setValue:(id<SAAceSerializable>)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)privacyPolicy;
-(NSArray *)matchingSpans;
-(void)setMatchingSpans:(NSArray *)arg1 ;
-(void)setPrivacyPolicy:(NSArray *)arg1 ;
@end

