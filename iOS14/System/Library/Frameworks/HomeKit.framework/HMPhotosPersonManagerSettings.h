/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface HMPhotosPersonManagerSettings : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _importingFromPhotoLibraryEnabled;
	BOOL _sharingFaceClassificationsEnabled;

}

@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;                         //@synthesize importingFromPhotoLibraryEnabled=_importingFromPhotoLibraryEnabled - In the implementation block
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;                       //@synthesize sharingFaceClassificationsEnabled=_sharingFaceClassificationsEnabled - In the implementation block
@property (getter=isEnabled,readonly) BOOL enabled; 
@property (getter=isSharingFaceClassificationsAllowed,readonly) BOOL sharingFaceClassificationsAllowed; 
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
-(NSString *)privateDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)shortDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(NSArray *)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isSharingFaceClassificationsEnabled;
-(void)setImportingFromPhotoLibraryEnabled:(BOOL)arg1 ;
-(void)setSharingFaceClassificationsEnabled:(BOOL)arg1 ;
-(BOOL)isSharingFaceClassificationsAllowed;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isImportingFromPhotoLibraryEnabled;
-(BOOL)isEqual:(id)arg1 ;
@end

