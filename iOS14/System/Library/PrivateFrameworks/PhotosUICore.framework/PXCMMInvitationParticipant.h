/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

@class NSString;


@protocol PXCMMInvitationParticipant <NSObject>
@property (nonatomic,readonly) NSString * emailAddressString; 
@property (nonatomic,readonly) NSString * phoneNumberString; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) NSString * firstName; 
@required
-(NSString *)firstName;
-(NSString *)localizedName;
-(NSString *)phoneNumberString;
-(NSString *)emailAddressString;

@end

