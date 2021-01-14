/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerIdentifier;
	NSString* _applicationBundleIdentifierOverride;
	CKRecordZoneID* _repairZoneID;

}

@property (nonatomic,copy) NSString * containerIdentifier;                              //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverride;              //@synthesize applicationBundleIdentifierOverride=_applicationBundleIdentifierOverride - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * repairZoneID;                               //@synthesize repairZoneID=_repairZoneID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)configurationFromBaseContainer:(id)arg1 ;
+(id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(NSString *)applicationBundleIdentifierOverride;
-(void)setRepairZoneID:(CKRecordZoneID *)arg1 ;
-(id)initFromBaseContainer:(id)arg1 ;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CKRecordZoneID *)repairZoneID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setApplicationBundleIdentifierOverride:(NSString *)arg1 ;
@end

