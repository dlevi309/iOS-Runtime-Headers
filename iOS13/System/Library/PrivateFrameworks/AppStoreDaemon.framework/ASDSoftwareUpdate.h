/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSDate, NSDictionary, NSString, NSNumber;

@interface ASDSoftwareUpdate : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _blockedBy;
	NSDate* _installDate;
	NSDictionary* _metrics;
	BOOL _perDevice;
	BOOL _profileValidated;
	NSDictionary* _rawUpdateDictionary;
	long long _rawUpdateState;
	NSDate* _timestamp;
	long long _updateState;
	BOOL _downloaded;

}

@property (nonatomic,copy) NSArray * blockedBy;                                            //@synthesize blockedBy=_blockedBy - In the implementation block
@property (nonatomic,copy) NSDate * installDate;                                           //@synthesize installDate=_installDate - In the implementation block
@property (nonatomic,copy) NSDictionary * metrics;                                         //@synthesize metrics=_metrics - In the implementation block
@property (assign,getter=isDownloaded,nonatomic) BOOL downloaded;                          //@synthesize downloaded=_downloaded - In the implementation block
@property (assign,getter=isPerDevice,nonatomic) BOOL perDevice;                            //@synthesize perDevice=_perDevice - In the implementation block
@property (assign,getter=isProfileValidated,nonatomic) BOOL profileValidated;              //@synthesize profileValidated=_profileValidated - In the implementation block
@property (assign,nonatomic) long long rawUpdateState;                                     //@synthesize rawUpdateState=_rawUpdateState - In the implementation block
@property (nonatomic,copy) NSDate * timestamp;                                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) long long updateState;                                        //@synthesize updateState=_updateState - In the implementation block
@property (nonatomic,readonly) NSString * bundleIdentifier; 
@property (nonatomic,readonly) NSString * buyParams; 
@property (nonatomic,readonly) NSNumber * externalVersionIdentifier; 
@property (nonatomic,readonly) long long parentalControlsRank; 
@property (nonatomic,readonly) NSDictionary * rawUpdateDictionary;                         //@synthesize rawUpdateDictionary=_rawUpdateDictionary - In the implementation block
@property (nonatomic,readonly) long long storeItemIdentifier; 
@property (nonatomic,readonly) NSDictionary * updateDictionary; 
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(NSDate *)timestamp;
-(NSNumber *)externalVersionIdentifier;
-(void)setTimestamp:(NSDate *)arg1 ;
-(NSDictionary *)metrics;
-(NSString *)buyParams;
-(NSDate *)installDate;
-(void)setInstallDate:(NSDate *)arg1 ;
-(void)setMetrics:(NSDictionary *)arg1 ;
-(BOOL)isDownloaded;
-(void)setDownloaded:(BOOL)arg1 ;
-(long long)updateState;
-(id)releaseDate;
-(long long)storeItemIdentifier;
-(BOOL)isProfileValidated;
-(void)setProfileValidated:(BOOL)arg1 ;
-(id)initWithUpdateDictionary:(id)arg1 ;
-(long long)parentalControlsRank;
-(NSDictionary *)updateDictionary;
-(void)setUpdateState:(long long)arg1 ;
-(NSArray *)blockedBy;
-(BOOL)isPerDevice;
-(NSDictionary *)rawUpdateDictionary;
-(long long)rawUpdateState;
-(void)setBlockedBy:(NSArray *)arg1 ;
-(void)setPerDevice:(BOOL)arg1 ;
-(void)setRawUpdateState:(long long)arg1 ;
@end

