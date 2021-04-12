/*
* Generated on Monday, March 1, 2021 at 2:35:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)userName;
-(BOOL)isLoaded;
-(void)setIsLoaded:(BOOL)arg1 ;
-(void)setUserName:(NSString *)arg1 ;
-(BOOL)isLocalDevice;
-(void)setIsLocalDevice:(BOOL)arg1 ;
-(NSNumber *)userDSID;
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
-(void)setUserDSID:(NSNumber *)arg1 ;
-(void)setVisibleRestrictions:(NSSet *)arg1 ;
@end

