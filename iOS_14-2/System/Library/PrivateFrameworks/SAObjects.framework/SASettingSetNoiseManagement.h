/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingSetValue.h>

@class NSString;

@interface SASettingSetNoiseManagement : SASettingSetValue

@property (nonatomic,copy) NSString * noiseManagementOption; 
+(id)setNoiseManagement;
+(id)setNoiseManagementWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)noiseManagementOption;
-(void)setNoiseManagementOption:(NSString *)arg1 ;
-(BOOL)mutatingCommand;
@end

