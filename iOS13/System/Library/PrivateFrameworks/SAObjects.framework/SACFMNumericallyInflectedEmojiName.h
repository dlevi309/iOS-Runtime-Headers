/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

