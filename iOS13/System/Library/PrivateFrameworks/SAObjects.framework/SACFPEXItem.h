/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSNumber *)score;
-(void)setScore:(NSNumber *)arg1 ;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(NSString *)sourceIdentifier;
-(id)encodedClassName;
-(NSString *)itemSource;
-(void)setItemSource:(NSString *)arg1 ;
@end

