/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeSettingsUI.framework/ScreenTimeSettingsUI
*/


@class NSString, NSNumber, NSMutableDictionary, STCommunicationLimits, NSSet;

@interface STContentPrivacyViewModel : NSObject {

	BOOL _isLoaded;
	BOOL _isLocalDevice;
	BOOL _restrictionsEnabled;
	BOOL _shouldAllowEditing;
	NSString* _userName;
	NSNumber* _userDSID;
	NSMutableDictionary* _valuesByRestriction;
	STCommunicationLimits* _communicationLimits;
	NSSet* _visibleRestrictions;

}

@property (nonatomic,copy) NSSet * visibleRestrictions;                              //@synthesize visibleRestrictions=_visibleRestrictions - In the implementation block
@property (assign,nonatomic) BOOL isLoaded;                                          //@synthesize isLoaded=_isLoaded - In the implementation block
@property (assign,nonatomic) BOOL isLocalDevice;                                     //@synthesize isLocalDevice=_isLocalDevice - In the implementation block
@property (assign,nonatomic) BOOL restrictionsEnabled;                               //@synthesize restrictionsEnabled=_restrictionsEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldAllowEditing;                                //@synthesize shouldAllowEditing=_shouldAllowEditing - In the implementation block
@property (nonatomic,copy) NSString * userName;                                      //@synthesize userName=_userName - In the implementation block
@property (nonatomic,copy) NSNumber * userDSID;                                      //@synthesize userDSID=_userDSID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * valuesByRestriction;              //@synthesize valuesByRestriction=_valuesByRestriction - In the implementation block
@property (retain) STCommunicationLimits * communicationLimits;                      //@synthesize communicationLimits=_communicationLimits - In the implementation block
-(void)setIsLocalDevice:(BOOL)arg1 ;
-(void)setIsLoaded:(BOOL)arg1 ;
-(id)init;
-(NSString *)userName;
-(BOOL)isLocalDevice;
-(void)setUserName:(NSString *)arg1 ;
-(NSNumber *)userDSID;
-(BOOL)isLoaded;
-(void)setUserDSID:(NSNumber *)arg1 ;
-(NSMutableDictionary *)valuesByRestriction;
-(void)setValuesByRestriction:(NSMutableDictionary *)arg1 ;
-(BOOL)shouldAllowEditing;
-(STCommunicationLimits *)communicationLimits;
-(void)setCommunicationLimits:(STCommunicationLimits *)arg1 ;
-(id)defaultValueForRestriction:(id)arg1 ;
-(id)visibleRestrictionWithConfiguration:(id)arg1 key:(id)arg2 ;
-(BOOL)restrictionsEnabled;
-(NSSet *)visibleRestrictions;
-(void)setRestrictionsEnabled:(BOOL)arg1 ;
-(void)setShouldAllowEditing:(BOOL)arg1 ;
-(void)setVisibleRestrictions:(NSSet *)arg1 ;
@end

