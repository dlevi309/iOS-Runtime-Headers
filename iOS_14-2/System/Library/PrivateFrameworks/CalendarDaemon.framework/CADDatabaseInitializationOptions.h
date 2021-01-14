/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CADChangeTrackingClientId, NSString;

@interface CADDatabaseInitializationOptions : NSObject <NSSecureCoding> {

	BOOL _enablePropertyModificationLogging;
	BOOL _unitTesting;
	BOOL _allowDelegateSources;
	int _databaseInitOptions;
	int _management;
	CADChangeTrackingClientId* _changeTrackingClientId;
	NSString* _managementBundleIdentifier;
	NSString* _databasePath;

}

@property (assign,nonatomic) int databaseInitOptions;                                         //@synthesize databaseInitOptions=_databaseInitOptions - In the implementation block
@property (nonatomic,retain) CADChangeTrackingClientId * changeTrackingClientId;              //@synthesize changeTrackingClientId=_changeTrackingClientId - In the implementation block
@property (assign,nonatomic) BOOL enablePropertyModificationLogging;                          //@synthesize enablePropertyModificationLogging=_enablePropertyModificationLogging - In the implementation block
@property (assign,nonatomic) int management;                                                  //@synthesize management=_management - In the implementation block
@property (nonatomic,retain) NSString * managementBundleIdentifier;                           //@synthesize managementBundleIdentifier=_managementBundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * databasePath;                                         //@synthesize databasePath=_databasePath - In the implementation block
@property (assign,nonatomic) BOOL unitTesting;                                                //@synthesize unitTesting=_unitTesting - In the implementation block
@property (assign,nonatomic) BOOL allowDelegateSources;                                       //@synthesize allowDelegateSources=_allowDelegateSources - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)unitTesting;
-(NSString *)databasePath;
-(void)setDatabasePath:(NSString *)arg1 ;
-(void)setUnitTesting:(BOOL)arg1 ;
-(void)setDatabaseInitOptions:(int)arg1 ;
-(id)init;
-(id)validOptionsForConnection:(id)arg1 ;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(CADChangeTrackingClientId *)changeTrackingClientId;
-(void)encodeWithCoder:(id)arg1 ;
-(int)management;
-(BOOL)allowDelegateSources;
-(id)description;
-(BOOL)enablePropertyModificationLogging;
-(int)databaseInitOptions;
-(void)setManagement:(int)arg1 ;
-(void)setChangeTrackingClientId:(CADChangeTrackingClientId *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setAllowDelegateSources:(BOOL)arg1 ;
-(NSString *)managementBundleIdentifier;
-(void)setEnablePropertyModificationLogging:(BOOL)arg1 ;
-(void)setManagementBundleIdentifier:(NSString *)arg1 ;
@end

