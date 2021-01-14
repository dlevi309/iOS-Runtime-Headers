/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface HMIExternalPersonManagerSettings : HMFObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding> {

	BOOL _importingFromPhotoLibraryEnabled;
	BOOL _sharingFaceClassificationsEnabled;

}

@property (getter=isImportingFromPhotoLibraryEnabled) BOOL importingFromPhotoLibraryEnabled;                //@synthesize importingFromPhotoLibraryEnabled=_importingFromPhotoLibraryEnabled - In the implementation block
@property (getter=isSharingFaceClassificationsEnabled) BOOL sharingFaceClassificationsEnabled;              //@synthesize sharingFaceClassificationsEnabled=_sharingFaceClassificationsEnabled - In the implementation block
@property (copy,readonly) NSString * shortDescription; 
@property (copy,readonly) NSString * privateDescription; 
@property (copy,readonly) NSString * propertyDescription; 
@property (nonatomic,copy,readonly) NSArray * attributeDescriptions; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSArray *)attributeDescriptions;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isSharingFaceClassificationsEnabled;
-(void)setImportingFromPhotoLibraryEnabled:(BOOL)arg1 ;
-(void)setSharingFaceClassificationsEnabled:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isImportingFromPhotoLibraryEnabled;
-(BOOL)isEqual:(id)arg1 ;
@end

