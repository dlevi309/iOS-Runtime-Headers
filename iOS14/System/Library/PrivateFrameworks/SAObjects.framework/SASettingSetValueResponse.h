/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingResponse.h>
#import <SAObjects/SASettingSupplier.h>

@class SASettingEntity, NSString;

@interface SASettingSetValueResponse : SASettingResponse <SASettingSupplier>

@property (nonatomic,retain) SASettingEntity * setting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)setValueResponse;
+(id)setValueResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASettingEntity *)setting;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSetting:(SASettingEntity *)arg1 ;
@end

