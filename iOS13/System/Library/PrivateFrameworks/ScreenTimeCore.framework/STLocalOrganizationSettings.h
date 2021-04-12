/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class STLocalOrganization, NSString;

@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (nonatomic,retain) STLocalOrganization * organization; 
@property (nonatomic,copy) NSString * recoveryAltDSID; 
-(id)dictionaryRepresentation;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(void)setPasscode:(id)arg1 ;
-(id)computeUniqueIdentifier;
@end

