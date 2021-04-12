/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SANPVideoLanguageOption : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * characteristics; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * languageTag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_languageOptionFromMediaRemoteRepresentation:(void*)arg1 ;
+(id)languageOption;
+(id)languageOptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)languageTag;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
-(void)setLanguageTag:(NSString *)arg1 ;
@end

