/*
* Generated on Thursday, January 14, 2021 at 2:22:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)enabled;
-(unsigned long long)formatVersion;
-(id)init;
-(NSString *)maskUUID;
-(id)debugDescription;
-(id)description;
-(NSDictionary *)settings;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 enabled:(BOOL)arg3 ;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(BOOL)arg5 ;
-(NSString *)autoIdentifier;
-(NSDictionary *)autoSettings;
-(id)initWithIdentifier:(id)arg1 settings:(id)arg2 autoIdentifier:(id)arg3 autoSettings:(id)arg4 enabled:(BOOL)arg5 maskUUID:(id)arg6 ;
-(id)initWithArchiveDictionary:(id)arg1 ;
-(NSString *)identifier;
-(id)archiveDictionary;
@end

