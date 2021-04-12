/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXCMMInvitationParticipant.h>

@class NSString;

@interface _PXMomentShareMockParticipant : NSObject <PXCMMInvitationParticipant> {

	NSString* emailAddressString;
	NSString* phoneNumberString;
	NSString* _localizedName;
	NSString* _firstName;

}

@property (nonatomic,retain) NSString * localizedName;                     //@synthesize localizedName=_localizedName - In the implementation block
@property (nonatomic,retain) NSString * firstName;                         //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,readonly) NSString * emailAddressString; 
@property (nonatomic,readonly) NSString * phoneNumberString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalizedName:(NSString *)arg1 ;
-(NSString *)firstName;
-(NSString *)localizedName;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;
@end

