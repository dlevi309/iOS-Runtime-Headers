/*
* Generated on Thursday, January 14, 2021 at 2:28:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/SoftwareUpdateCore
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface SUCorePolicySoftwareUpdateScan : NSObject <NSSecureCoding, NSCopying> {

	BOOL _allowsCellular;
	BOOL _discretionary;
	BOOL _requiresPowerPluggedIn;
	BOOL _restrictToIncremental;
	BOOL _restrictToFull;
	BOOL _allowSameVersion;
	BOOL _liveServerCatalogOnly;
	int _downloadTimeoutSecs;
	long long _specifiedFields;
	NSString* _sessionId;
	NSString* _rampingScanType;
	long long _scanUpdateType;
	NSDictionary* _additionalServerParams;
	NSDictionary* _additionalOptions;

}

@property (assign) long long specifiedFields;                                    //@synthesize specifiedFields=_specifiedFields - In the implementation block
@property (assign,nonatomic) BOOL allowsCellular;                                //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) BOOL discretionary;                                 //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) BOOL requiresPowerPluggedIn;                        //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) BOOL restrictToIncremental;                         //@synthesize restrictToIncremental=_restrictToIncremental - In the implementation block
@property (assign,nonatomic) BOOL restrictToFull;                                //@synthesize restrictToFull=_restrictToFull - In the implementation block
@property (assign,nonatomic) BOOL allowSameVersion;                              //@synthesize allowSameVersion=_allowSameVersion - In the implementation block
@property (assign,nonatomic) int downloadTimeoutSecs;                            //@synthesize downloadTimeoutSecs=_downloadTimeoutSecs - In the implementation block
@property (nonatomic,retain) NSString * sessionId;                               //@synthesize sessionId=_sessionId - In the implementation block
@property (nonatomic,retain) NSString * rampingScanType;                         //@synthesize rampingScanType=_rampingScanType - In the implementation block
@property (assign,nonatomic) long long scanUpdateType;                           //@synthesize scanUpdateType=_scanUpdateType - In the implementation block
@property (assign,nonatomic) BOOL liveServerCatalogOnly;                         //@synthesize liveServerCatalogOnly=_liveServerCatalogOnly - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalServerParams;              //@synthesize additionalServerParams=_additionalServerParams - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;                   //@synthesize additionalOptions=_additionalOptions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)nameForScanUpdateType:(long long)arg1 ;
-(void)setDiscretionary:(BOOL)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
-(id)init;
-(void)setRequiresPowerPluggedIn:(BOOL)arg1 ;
-(void)setLiveServerCatalogOnly:(BOOL)arg1 ;
-(BOOL)allowSameVersion;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setAllowSameVersion:(BOOL)arg1 ;
-(id)description;
-(BOOL)liveServerCatalogOnly;
-(id)summary;
-(BOOL)allowsCellular;
-(void)setAllowsCellular:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)additionalServerParams;
-(BOOL)discretionary;
-(BOOL)requiresPowerPluggedIn;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setAdditionalServerParams:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalOptions;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(long long)specifiedFields;
-(void)setSpecifiedFields:(long long)arg1 ;
-(NSString *)rampingScanType;
-(void)backToDefaults;
-(long long)scanUpdateType;
-(BOOL)restrictToIncremental;
-(BOOL)restrictToFull;
-(int)downloadTimeoutSecs;
-(void)setRestrictToIncremental:(BOOL)arg1 ;
-(void)setRestrictToFull:(BOOL)arg1 ;
-(void)setDownloadTimeoutSecs:(int)arg1 ;
-(void)setRampingScanType:(NSString *)arg1 ;
-(void)setScanUpdateType:(long long)arg1 ;
-(BOOL)shouldScanForMajorUpdates;
-(BOOL)shouldScanForMinorUpdates;
@end

