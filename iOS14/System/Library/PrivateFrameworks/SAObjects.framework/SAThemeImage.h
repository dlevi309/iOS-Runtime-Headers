/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSData;

@interface SAThemeImage : SADomainObject

@property (nonatomic,copy) NSString * appearanceSetting; 
@property (nonatomic,copy) NSData * dynamicImage; 
+(id)themeImage;
+(id)themeImageWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)appearanceSetting;
-(void)setAppearanceSetting:(NSString *)arg1 ;
-(NSData *)dynamicImage;
-(void)setDynamicImage:(NSData *)arg1 ;
@end

