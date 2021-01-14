/*
* Generated on Thursday, January 14, 2021 at 2:26:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
*/

#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/CKSQLiteItem.h>

@class NSString;

@interface CKDApplicationID : NSObject <NSSecureCoding, NSCopying, CKSQLiteItem> {

	NSString* _applicationBundleIdentifier;
	NSString* _applicationBundleIdentifierOverrideForContainerAccess;
	NSString* _applicationBundleIdentifierOverrideForNetworkAttribution;
	NSString* _applicationBundleIdentifierOverrideForPushTopicGeneration;
	NSString* _applicationBundleIdentifierOverrideForTCC;

}

@property (nonatomic,copy) NSString * applicationBundleIdentifier;                                            //@synthesize applicationBundleIdentifier=_applicationBundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForContainerAccess;                  //@synthesize applicationBundleIdentifierOverrideForContainerAccess=_applicationBundleIdentifierOverrideForContainerAccess - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForNetworkAttribution;               //@synthesize applicationBundleIdentifierOverrideForNetworkAttribution=_applicationBundleIdentifierOverrideForNetworkAttribution - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForPushTopicGeneration;              //@synthesize applicationBundleIdentifierOverrideForPushTopicGeneration=_applicationBundleIdentifierOverrideForPushTopicGeneration - In the implementation block
@property (nonatomic,copy) NSString * applicationBundleIdentifierOverrideForTCC;                              //@synthesize applicationBundleIdentifierOverrideForTCC=_applicationBundleIdentifierOverrideForTCC - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setApplicationBundleIdentifierOverrideForPushTopicGeneration:(NSString *)arg1 ;
-(id)initWithApplicationBundleIdentifier:(id)arg1 ;
-(id)init;
-(void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)setApplicationBundleIdentifierOverrideForContainerAccess:(NSString *)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForTCC:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForNetworkAttribution;
-(id)initWithSqliteRepresentation:(id)arg1 ;
-(NSString *)description;
-(void)setApplicationBundleIdentifier:(NSString *)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForPushTopicGeneration;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)applicationBundleIdentifierOverrideForContainerAccess;
-(id)sqliteRepresentation;
-(NSString *)applicationBundleIdentifierOverrideForTCC;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)applicationBundleIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithApplicationBundleIdentifier:(id)arg1 applicationBundleIdentifierOverrideForContainerAccess:(id)arg2 applicationBundleIdentifierOverrideForNetworkAttribution:(id)arg3 applicationBundleIdentifierOverrideForPushTopicGeneration:(id)arg4 applicationBundleIdentifierOverrideForTCC:(id)arg5 ;
@end

