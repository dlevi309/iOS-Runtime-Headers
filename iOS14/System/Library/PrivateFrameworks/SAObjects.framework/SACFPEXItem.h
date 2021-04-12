/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSNumber;

@interface SACFPEXItem : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * itemSource; 
@property (nonatomic,copy) NSNumber * score; 
@property (nonatomic,copy) NSString * sourceIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)item;
+(id)itemWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSNumber *)score;
-(void)setScore:(NSNumber *)arg1 ;
-(NSString *)itemSource;
-(void)setItemSource:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)sourceIdentifier;
@end

