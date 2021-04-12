/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString, NSDictionary;

@interface PFAdjustment : NSObject {

	BOOL _enabled;
	unsigned long long _formatVersion;
	NSString* _identifier;
	NSDictionary* _settings;
	NSString* _autoIdentifier;
	NSDictionary* _autoSettings;
	NSString* _maskUUID;

}

@property (nonatomic,readonly) unsigned long long formatVersion;              //@synthesize formatVersion=_formatVersion - In the implementation block
@property (nonatomic,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * settings;                       //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSString * autoIdentifier;                     //@synthesize autoIdentifier=_autoIdentifier - In the implementation block
@property (nonatomic,readonly) NSDictionary * autoSettings;                   //@synthesize autoSettings=_autoSettings - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSString * maskUUID;                           //@synthesize maskUUID=_maskUUID - In the implementation block
+(BOOL)isValidArchiveDictionary:(id)arg1 errors:(id)arg2 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(BOOL)enabled;
-(NSString *)identifier;
-(NSDictionary *)settings;
-(id)archiveDictionary;
-(unsigned long long)formatVersion;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 enabled:(BOOL)arg3 ;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(BOOL)arg5 ;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(BOOL)arg5 maskUUID:(id)arg6 ;
-(NSString *)autoIdentifier;
-(NSDictionary *)autoSettings;
-(NSString *)maskUUID;
-(id)initWithArchiveDictionary:(id)arg1 ;
@end

