/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <CloudKit/CloudKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, CKRecordZoneID;

@interface CKUploadRequestConfiguration : NSObject <NSSecureCoding, NSCopying> {

	NSString* _containerIdentifier;
	NSString* _sourceApplicationBundleID;
	CKRecordZoneID* _repairZoneID;

}

@property (nonatomic,copy) NSString * containerIdentifier;                    //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * sourceApplicationBundleID;              //@synthesize sourceApplicationBundleID=_sourceApplicationBundleID - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * repairZoneID;                     //@synthesize repairZoneID=_repairZoneID - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)resolvedConfigurationWithBaseContainer:(id)arg1 overrides:(id)arg2 ;
+(id)configurationFromBaseContainer:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)containerIdentifier;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(CKRecordZoneID *)repairZoneID;
-(NSString *)sourceApplicationBundleID;
-(void)setSourceApplicationBundleID:(NSString *)arg1 ;
-(void)setRepairZoneID:(CKRecordZoneID *)arg1 ;
-(id)initFromBaseContainer:(id)arg1 ;
@end

