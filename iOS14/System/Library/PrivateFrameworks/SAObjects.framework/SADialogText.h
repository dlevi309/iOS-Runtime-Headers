/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SADialogText : SABaseAceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * speakableTextOverride; 
@property (nonatomic,copy) NSString * text; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)speakableTextOverride;
-(void)setSpeakableTextOverride:(NSString *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(NSString *)text;
@end

