/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseAceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SADialogConfiguration : SABaseAceObject <SAAceSerializable>

@property (nonatomic,retain) id<SAAceSerializable> context; 
@property (nonatomic,copy) NSString * gender; 
@property (nonatomic,copy) NSString * languageCode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLanguageCode:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)languageCode;
-(id<SAAceSerializable>)context;
-(void)setGender:(NSString *)arg1 ;
-(NSString *)gender;
-(void)setContext:(id<SAAceSerializable>)arg1 ;
@end

