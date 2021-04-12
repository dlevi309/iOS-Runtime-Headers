/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)name;
-(void)setValue:(id<SAAceSerializable>)arg1 ;
-(NSArray *)matchingSpans;
-(void)setMatchingSpans:(NSArray *)arg1 ;
-(void)setPrivacyPolicy:(NSArray *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)privacyPolicy;
-(id<SAAceSerializable>)value;
@end

