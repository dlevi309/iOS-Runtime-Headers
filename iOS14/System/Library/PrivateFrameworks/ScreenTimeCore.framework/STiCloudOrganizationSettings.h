/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STCoreOrganizationSettings.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>

@class STiCloudOrganization, NSString;

@interface STiCloudOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject>

@property (nonatomic,retain) STiCloudOrganization * organization; 
@property (nonatomic,copy) NSString * recoveryAltDSID; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serializableClassName;
-(id)dictionaryRepresentation;
-(void)setPasscode:(id)arg1 ;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
@end

