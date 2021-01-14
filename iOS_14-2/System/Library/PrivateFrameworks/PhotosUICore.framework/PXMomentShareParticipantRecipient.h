/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXRecipient.h>

@class PHShareParticipant;

@interface PXMomentShareParticipantRecipient : PXRecipient {

	PHShareParticipant* _momentShareParticipant;

}

@property (nonatomic,readonly) PHShareParticipant * momentShareParticipant;              //@synthesize momentShareParticipant=_momentShareParticipant - In the implementation block
-(id)initWithMomentShareParticipant:(id)arg1 ;
-(PHShareParticipant *)momentShareParticipant;
-(id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4 ;
@end

