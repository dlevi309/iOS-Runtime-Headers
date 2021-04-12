/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
*/

#import <ScreenTimeCore/STCoreOrganizationSettings.h>

@class STLocalOrganization, NSString;

@interface STLocalOrganizationSettings : STCoreOrganizationSettings

@property (nonatomic,retain) STLocalOrganization * organization; 
@property (nonatomic,copy) NSString * recoveryAltDSID; 
-(id)dictionaryRepresentation;
-(void)setPasscode:(id)arg1 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
@end

