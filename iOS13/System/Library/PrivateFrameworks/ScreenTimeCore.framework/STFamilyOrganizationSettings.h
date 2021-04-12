/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class NSData, STFamilyOrganization;

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings

@property (assign,nonatomic) BOOL isDirty; 
@property (assign,nonatomic) BOOL isManaged; 
@property (assign,nonatomic) BOOL shareWebUsage; 
@property (nonatomic,copy) NSData * versionVector; 
@property (nonatomic,retain) STFamilyOrganization * organization; 
-(id)description;
-(id)redactedDescription;
-(void)didChangeValueForKey:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIsManaged:(BOOL)arg1 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)setPasscode:(id)arg1 ;
-(id)computeUniqueIdentifier;
@end

