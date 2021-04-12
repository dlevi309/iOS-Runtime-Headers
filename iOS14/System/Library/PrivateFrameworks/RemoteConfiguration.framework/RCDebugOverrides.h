/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)dictionaryRepresentation;
-(BOOL)ignoreCache;
-(NSArray *)overrideSegmentSetIDs;
-(id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(BOOL)arg6 enableExtraLogs:(BOOL)arg7 ;
-(unsigned long long)configurationSource;
-(NSArray *)additionalSegmentSetIDs;
-(NSString *)description;
-(BOOL)disableAbTesting;
-(BOOL)enableExtraLogs;
-(id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 configurationSource:(unsigned long long)arg4 debugEnvironment:(unsigned long long)arg5 ignoreCache:(BOOL)arg6 ;
-(unsigned long long)hash;
-(unsigned long long)debugEnvironment;
-(BOOL)onlyUseFallbackURL;
-(id)initWithDisableAbTesting:(BOOL)arg1 overrideSegmentSetIDs:(id)arg2 additionalSegmentSetIDs:(id)arg3 onlyUseFallbackURL:(BOOL)arg4 debugEnvironment:(unsigned long long)arg5 ;
-(BOOL)isEqual:(id)arg1 ;
@end

