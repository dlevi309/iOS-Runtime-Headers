/*
* Generated on Monday, March 1, 2021 at 2:32:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingResponse.h>
#import <SAObjects/SASettingSupplier.h>

@class SASettingEntity, NSString;

@interface SASettingGetValueResponse : SASettingResponse <SASettingSupplier>

@property (nonatomic,retain) SASettingEntity * setting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getValueResponse;
+(id)getValueResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASettingEntity *)setting;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(void)setSetting:(SASettingEntity *)arg1 ;
@end

