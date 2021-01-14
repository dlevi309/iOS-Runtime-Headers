/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STCoreOrganizationSettings.h>
#import <libobjc.A.dylib/STSerializableMappedObject.h>
#import <libobjc.A.dylib/STVersionVectorable.h>

@class STFamilyOrganization, NSString, NSData;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>

@property (assign,nonatomic) BOOL isManaged; 
@property (assign,nonatomic) BOOL shareWebUsage; 
@property (nonatomic,retain) STFamilyOrganization * organization; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSData * versionVector; 
@property (assign,nonatomic) BOOL isDirty; 
+(id)serializableClassName;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setPasscode:(id)arg1 ;
-(NSString *)description;
-(id)computeUniqueIdentifier;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(id)redactedDescription;
-(void)setIsManaged:(BOOL)arg1 ;
@end

