/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STCoreOrganization.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>

@class STLocalOrganizationSettings, NSString;

@interface STLocalOrganization : STCoreOrganization <STSerializableMappedObject>

@property (nonatomic,copy) STLocalOrganizationSettings * settings; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchOrCreateLocalOrganizationWithContext:(id)arg1 error:(id*)arg2 ;
+(id)serializableClassName;
@end

