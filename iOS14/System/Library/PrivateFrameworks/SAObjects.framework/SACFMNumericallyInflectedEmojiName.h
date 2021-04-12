/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SACFMNumericallyInflectedEmojiName : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * withEmoji; 
@property (nonatomic,copy) NSString * withoutEmoji; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)numericallyInflectedEmojiName;
+(id)numericallyInflectedEmojiNameWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)withEmoji;
-(void)setWithEmoji:(NSString *)arg1 ;
-(NSString *)withoutEmoji;
-(void)setWithoutEmoji:(NSString *)arg1 ;
@end

