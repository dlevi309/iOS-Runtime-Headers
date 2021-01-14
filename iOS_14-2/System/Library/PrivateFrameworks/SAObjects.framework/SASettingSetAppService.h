/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingSetBool.h>
#import <SAObjects/SASettingAppSettingCommand.h>

@class NSString, NSArray;

@interface SASettingSetAppService : SASettingSetBool <SASettingAppSettingCommand>

@property (nonatomic,copy) NSString * appWithSettingsId; 
@property (nonatomic,copy) NSString * location; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSArray * callbacks; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)setAppService;
+(id)setAppServiceWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)appWithSettingsId;
-(void)setAppWithSettingsId:(NSString *)arg1 ;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
@end

