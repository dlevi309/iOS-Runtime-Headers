/*
* Generated on Monday, March 1, 2021 at 2:33:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSString, NSMutableDictionary;

@interface WBSUserMediaCapturePolicyEntry : NSObject {

	double _permissionExpirationDate;
	double _permissionGrantDate;
	NSString* _origin;
	NSString* _topLevelOrigin;
	NSString* _persistentSalt;
	unsigned long long _permission;
	NSMutableDictionary* _ephemeralSalts;

}

@property (assign,nonatomic) double permissionExpirationDate;                   //@synthesize permissionExpirationDate=_permissionExpirationDate - In the implementation block
@property (assign,nonatomic) double permissionGrantDate;                        //@synthesize permissionGrantDate=_permissionGrantDate - In the implementation block
@property (nonatomic,retain) NSString * origin;                                 //@synthesize origin=_origin - In the implementation block
@property (nonatomic,retain) NSString * topLevelOrigin;                         //@synthesize topLevelOrigin=_topLevelOrigin - In the implementation block
@property (nonatomic,retain) NSString * persistentSalt;                         //@synthesize persistentSalt=_persistentSalt - In the implementation block
@property (assign,nonatomic) unsigned long long permission;                     //@synthesize permission=_permission - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * ephemeralSalts;              //@synthesize ephemeralSalts=_ephemeralSalts - In the implementation block
-(BOOL)isValid;
-(id)dictionaryRepresentation;
-(NSString *)origin;
-(void)setOrigin:(NSString *)arg1 ;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(unsigned long long)permission;
-(void)setPermission:(unsigned long long)arg1 ;
-(void)setPersistentSalt:(NSString *)arg1 ;
-(void)updatePermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 ;
-(id)initWithPermission:(unsigned long long)arg1 expirationPolicy:(unsigned long long)arg2 forOrigin:(id)arg3 topLevelOrigin:(id)arg4 ;
-(NSMutableDictionary *)ephemeralSalts;
-(NSString *)persistentSalt;
-(void)setEphemeralSalts:(NSMutableDictionary *)arg1 ;
-(double)permissionGrantDate;
-(BOOL)permissionExpiresWithinOneDay;
-(NSString *)topLevelOrigin;
-(BOOL)_isValidUserMediaPermission:(unsigned long long)arg1 ;
-(double)permissionExpirationDate;
-(void)setPermissionExpirationDate:(double)arg1 ;
-(void)setPermissionGrantDate:(double)arg1 ;
-(void)setTopLevelOrigin:(NSString *)arg1 ;
@end

