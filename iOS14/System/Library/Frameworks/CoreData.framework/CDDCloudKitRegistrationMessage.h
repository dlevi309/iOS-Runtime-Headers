/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CDDCloudKitMessage.h>

@class NSString, NSFileHandle;

@interface CDDCloudKitRegistrationMessage : CDDCloudKitMessage {

	NSString* _bundleIdentifier;
	NSFileHandle* _storeFileHandle;
	NSString* _storePath;
	NSString* _storeFileProtectionClass;
	NSString* _storeType;
	NSString* _storeConfigurationName;
	NSString* _containerIdentifier;

}
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
@end

