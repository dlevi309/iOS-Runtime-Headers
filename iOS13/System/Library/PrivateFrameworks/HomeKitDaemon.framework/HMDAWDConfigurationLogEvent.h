/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSMutableArray, NSString;

@interface HMDAWDConfigurationLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _isResidentCapable;
	BOOL _isResidentEnabled;
	BOOL _isDemoHomeConfigured;
	unsigned _databaseSize;
	unsigned _metadataVersion;
	NSMutableArray* _homeConfigurations;

}

@property (assign) unsigned databaseSize;                                        //@synthesize databaseSize=_databaseSize - In the implementation block
@property (assign) unsigned metadataVersion;                                     //@synthesize metadataVersion=_metadataVersion - In the implementation block
@property (assign) BOOL isResidentCapable;                                       //@synthesize isResidentCapable=_isResidentCapable - In the implementation block
@property (assign) BOOL isResidentEnabled;                                       //@synthesize isResidentEnabled=_isResidentEnabled - In the implementation block
@property (assign) BOOL isDemoHomeConfigured;                                    //@synthesize isDemoHomeConfigured=_isDemoHomeConfigured - In the implementation block
@property (nonatomic,readonly) NSMutableArray * homeConfigurations;              //@synthesize homeConfigurations=_homeConfigurations - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)initialize;
+(id)uuid;
-(id)initWithCapacity:(unsigned long long)arg1 ;
-(unsigned)databaseSize;
-(unsigned)metadataVersion;
-(void)setMetadataVersion:(unsigned)arg1 ;
-(BOOL)isResidentCapable;
-(void)setDatabaseSize:(unsigned)arg1 ;
-(void)setIsResidentCapable:(BOOL)arg1 ;
-(void)setIsResidentEnabled:(BOOL)arg1 ;
-(BOOL)isResidentEnabled;
-(NSMutableArray *)homeConfigurations;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(BOOL)isDemoHomeConfigured;
-(void)setIsDemoHomeConfigured:(BOOL)arg1 ;
@end

