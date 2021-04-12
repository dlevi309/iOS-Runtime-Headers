/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/

#import <libobjc.A.dylib/RCSerializable.h>

@class NSArray, NSString;

@interface RCDebugOverrides : NSObject <RCSerializable> {

	BOOL _disableAbTesting;
	BOOL _ignoreCache;
	BOOL _enableExtraLogs;
	NSArray* _overrideSegmentSetIDs;
	NSArray* _additionalSegmentSetIDs;
	unsigned long long _configurationSource;
	unsigned long long _debugEnvironment;

}

@property (nonatomic,readonly) BOOL disableAbTesting;                               //@synthesize disableAbTesting=_disableAbTesting - In the implementation block
@property (nonatomic,copy,readonly) NSArray * overrideSegmentSetIDs;                //@synthesize overrideSegmentSetIDs=_overrideSegmentSetIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * additionalSegmentSetIDs;              //@synthesize additionalSegmentSetIDs=_additionalSegmentSetIDs - In the implementation block
@property (nonatomic,readonly) BOOL onlyUseFallbackURL; 
@property (nonatomic,readonly) unsigned long long configurationSource;              //@synthesize configurationSource=_configurationSource - In the implementation block
@property (nonatomic,readonly) unsigned long long debugEnvironment;                 //@synthesize debugEnvironment=_debugEnvironment - In the implementation block
@property (nonatomic,readonly) BOOL ignoreCache;                                    //@synthesize ignoreCache=_ignoreCache - In the implementation block
@property (nonatomic,readonly) BOOL enableExtraLogs;                                //@synthesize enableExtraLogs=_enableExtraLogs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDebugOverrides;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(BOOL)ignoreCache;
-(unsigned long long)configurationSource;
-(BOOL)enableExtraLogs;
-(id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(BOOL)arg6 enableExtraLogs:(BOOL)arg7 ;
-(BOOL)disableAbTesting;
-(NSArray *)overrideSegmentSetIDs;
-(NSArray *)additionalSegmentSetIDs;
-(unsigned long long)debugEnvironment;
-(id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 onlyUseFallbackURL:(BOOL)arg4 debugEnvironment:(unsigned long long)arg5 ;
-(id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(BOOL)arg6 ;
-(BOOL)onlyUseFallbackURL;
@end

