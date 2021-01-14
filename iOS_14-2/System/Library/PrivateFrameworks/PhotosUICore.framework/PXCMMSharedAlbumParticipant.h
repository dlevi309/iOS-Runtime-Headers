/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXCMMInvitationParticipant.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PXCMMSharedAlbumParticipant : NSObject <PXCMMInvitationParticipant, NSCopying> {

	NSString* _emailAddressString;
	NSString* _phoneNumberString;
	NSString* _localizedName;
	NSString* _firstName;

}

@property (nonatomic,readonly) NSString * emailAddressString;              //@synthesize emailAddressString=_emailAddressString - In the implementation block
@property (nonatomic,readonly) NSString * phoneNumberString;               //@synthesize phoneNumberString=_phoneNumberString - In the implementation block
@property (nonatomic,readonly) NSString * localizedName;                   //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,readonly) NSString * firstName;                       //@synthesize firstName=_firstName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)firstName;
-(NSString *)localizedName;
-(id)initWithRecord:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;
@end

