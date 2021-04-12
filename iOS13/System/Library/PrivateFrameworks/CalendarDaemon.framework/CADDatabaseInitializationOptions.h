/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)databasePath;
-(void)setUnitTesting:(BOOL)arg1 ;
-(BOOL)unitTesting;
-(void)setDatabasePath:(NSString *)arg1 ;
-(BOOL)isEqualToOptions:(id)arg1 ;
-(void)setDatabaseInitOptions:(int)arg1 ;
-(void)setChangeTrackingClientId:(CADChangeTrackingClientId *)arg1 ;
-(void)setEnablePropertyModificationLogging:(BOOL)arg1 ;
-(void)setAllowDelegateSources:(BOOL)arg1 ;
-(void)setManagement:(int)arg1 ;
-(void)setManagementBundleIdentifier:(NSString *)arg1 ;
-(int)databaseInitOptions;
-(CADChangeTrackingClientId *)changeTrackingClientId;
-(BOOL)enablePropertyModificationLogging;
-(int)management;
-(NSString *)managementBundleIdentifier;
-(BOOL)allowDelegateSources;
-(id)validOptionsForConnection:(id)arg1 ;
@end

