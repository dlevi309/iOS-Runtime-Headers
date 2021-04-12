/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXRecipient.h>

@class CNComposeRecipient;

@interface PXCNComposeRecipient : PXRecipient {

	CNComposeRecipient* _recipient;

}

@property (nonatomic,readonly) CNComposeRecipient * recipient;              //@synthesize recipient=_recipient - In the implementation block
-(id)description;
-(id)initWithRecipient:(id)arg1 ;
-(CNComposeRecipient *)recipient;
-(id)initWithContact:(id)arg1 address:(id)arg2 nameComponents:(id)arg3 recipientKind:(long long)arg4 ;
@end

