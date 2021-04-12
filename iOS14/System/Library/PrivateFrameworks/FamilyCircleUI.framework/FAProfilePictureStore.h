/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/


@protocol OS_dispatch_queue;
@class FAFamilyCircle, NSObject, NSMutableDictionary, NSDictionary;

@interface FAProfilePictureStore : NSObject {

	FAFamilyCircle* _familyCircle;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableDictionary* _profileImages;

}

@property (nonatomic,copy,readonly) NSDictionary * profileImages; 
@property (nonatomic,retain) FAFamilyCircle * familyCircle; 
+(double)screenScale;
+(id)profilePictureForContact:(id)arg1 serverImageData:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 diameter:(double)arg5 ;
+(id)_dataForImage:(id)arg1 ;
-(void)setFamilyCircle:(FAFamilyCircle *)arg1 ;
-(FAFamilyCircle *)familyCircle;
-(id)profilePictureForFamilyMember:(id)arg1 ;
-(id)initWithFamilyCircle:(id)arg1 ;
-(void)_traitCollectionDidChange:(id)arg1 ;
-(void)dealloc;
-(id)profilePicturesWithDiameter:(double)arg1 ;
-(void)fetchProfileImagesWithCompletion:(/*^block*/id)arg1 ;
-(id)profilePictureForFamilyMember:(id)arg1 pictureDiameter:(double)arg2 ;
-(id)profilePictureForFamilyMemberWithAltDSID:(id)arg1 pictureDiameter:(double)arg2 ;
-(void)_postReloadNotification;
-(NSDictionary *)profileImages;
-(id)resizedPictureWithData:(id)arg1 diameter:(double)arg2 ;
@end

