/*
* Generated on Monday, March 1, 2021 at 2:34:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/DiagnosticExtensionsDaemon
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSSet, NSString, NSNumber, NSDictionary, DEDNotifierConfiguration;

@interface DEDBugSessionConfiguration : NSObject <NSSecureCoding, NSCopying, DEDSecureArchiving> {

	NSSet* _requestedCapabilities;
	BOOL _allowsCellularUpload;
	BOOL _cloudkitUseDevelopmentEnvironment;
	long long _finishingMove;
	long long _notifyingMove;
	NSString* _seedingDeviceToken;
	long long _seedingSubmissionID;
	long long _seedingSubmissionType;
	long long _seedingEnvironment;
	NSString* _seedingHost;
	NSNumber* _radarProblemID;
	NSString* _radarAuthToken;
	NSString* _cloudkitContainer;
	NSDictionary* _cloudkitData;
	DEDNotifierConfiguration* _notifierConfiguration;

}

@property (readonly) NSString * requestedCapabilitiesString; 
@property (assign) long long finishingMove;                                       //@synthesize finishingMove=_finishingMove - In the implementation block
@property (assign) long long notifyingMove;                                       //@synthesize notifyingMove=_notifyingMove - In the implementation block
@property (assign) BOOL allowsCellularUpload;                                     //@synthesize allowsCellularUpload=_allowsCellularUpload - In the implementation block
@property (retain) NSString * seedingDeviceToken;                                 //@synthesize seedingDeviceToken=_seedingDeviceToken - In the implementation block
@property (assign) long long seedingSubmissionID;                                 //@synthesize seedingSubmissionID=_seedingSubmissionID - In the implementation block
@property (assign) long long seedingSubmissionType;                               //@synthesize seedingSubmissionType=_seedingSubmissionType - In the implementation block
@property (assign) long long seedingEnvironment;                                  //@synthesize seedingEnvironment=_seedingEnvironment - In the implementation block
@property (retain) NSString * seedingHost;                                        //@synthesize seedingHost=_seedingHost - In the implementation block
@property (retain) NSNumber * radarProblemID;                                     //@synthesize radarProblemID=_radarProblemID - In the implementation block
@property (retain) NSString * radarAuthToken;                                     //@synthesize radarAuthToken=_radarAuthToken - In the implementation block
@property (retain) NSString * cloudkitContainer;                                  //@synthesize cloudkitContainer=_cloudkitContainer - In the implementation block
@property (assign) BOOL cloudkitUseDevelopmentEnvironment;                        //@synthesize cloudkitUseDevelopmentEnvironment=_cloudkitUseDevelopmentEnvironment - In the implementation block
@property (retain) NSDictionary * cloudkitData;                                   //@synthesize cloudkitData=_cloudkitData - In the implementation block
@property (retain) DEDNotifierConfiguration * notifierConfiguration;              //@synthesize notifierConfiguration=_notifierConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)archivedClasses;
+(id)secureUnarchiveWithData:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqualToConfiguration:(id)arg1 ;
-(id)requestedCapabilities;
-(id)secureArchive;
-(NSNumber *)radarProblemID;
-(NSString *)radarAuthToken;
-(long long)finishingMove;
-(long long)notifyingMove;
-(DEDNotifierConfiguration *)notifierConfiguration;
-(long long)seedingSubmissionType;
-(long long)seedingSubmissionID;
-(BOOL)allowsCellularUpload;
-(NSString *)requestedCapabilitiesString;
-(NSString *)seedingDeviceToken;
-(long long)seedingEnvironment;
-(NSString *)seedingHost;
-(NSString *)cloudkitContainer;
-(BOOL)cloudkitUseDevelopmentEnvironment;
-(NSDictionary *)cloudkitData;
-(void)requestCapabilitiesSet:(id)arg1 ;
-(void)requestCapabilities:(id)arg1 ;
-(void)setFinishingMove:(long long)arg1 ;
-(void)setNotifyingMove:(long long)arg1 ;
-(void)setAllowsCellularUpload:(BOOL)arg1 ;
-(void)setSeedingDeviceToken:(NSString *)arg1 ;
-(void)setSeedingSubmissionID:(long long)arg1 ;
-(void)setSeedingSubmissionType:(long long)arg1 ;
-(void)setSeedingEnvironment:(long long)arg1 ;
-(void)setSeedingHost:(NSString *)arg1 ;
-(void)setRadarProblemID:(NSNumber *)arg1 ;
-(void)setRadarAuthToken:(NSString *)arg1 ;
-(void)setCloudkitContainer:(NSString *)arg1 ;
-(void)setCloudkitUseDevelopmentEnvironment:(BOOL)arg1 ;
-(void)setCloudkitData:(NSDictionary *)arg1 ;
-(void)setNotifierConfiguration:(DEDNotifierConfiguration *)arg1 ;
@end
