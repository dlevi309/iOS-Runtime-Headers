/*
* Generated on Thursday, January 14, 2021 at 2:21:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface CKApplicationPermissionGroup : NSObject <NSSecureCoding> {

	NSArray* _containerIDs;
	NSArray* _applicationBundleIDs;
	unsigned long long _enabledPermissions;

}

@property (nonatomic,copy) NSArray * containerIDs;                               //@synthesize containerIDs=_containerIDs - In the implementation block
@property (nonatomic,copy) NSArray * applicationBundleIDs;                       //@synthesize applicationBundleIDs=_applicationBundleIDs - In the implementation block
@property (assign,nonatomic) unsigned long long enabledPermissions;              //@synthesize enabledPermissions=_enabledPermissions - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setContainerIDs:(NSArray *)arg1 ;
-(id)init;
-(id)CKPropertiesDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)applicationBundleIDs;
-(void)setApplicationBundleIDs:(NSArray *)arg1 ;
-(void)setEnabledPermissions:(unsigned long long)arg1 ;
-(unsigned long long)enabledPermissions;
-(NSArray *)containerIDs;
@end

