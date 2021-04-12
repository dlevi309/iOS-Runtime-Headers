/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarLibraryItem.h>

@protocol AVTAvatarRecord;
@class AVTUIEnvironment, NSString;

@interface AVTAvatarLibraryRecordItem : NSObject <AVTAvatarLibraryItem> {

	id<AVTAvatarRecord> _avatarRecord;
	AVTUIEnvironment* _environment;

}

@property (nonatomic,readonly) AVTUIEnvironment * environment;                //@synthesize environment=_environment - In the implementation block
@property (nonatomic,readonly) id<AVTAvatarRecord> avatarRecord;              //@synthesize avatarRecord=_avatarRecord - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)cellIdentifier;
-(AVTUIEnvironment *)environment;
-(id<AVTAvatarRecord>)avatarRecord;
-(void)configureCell:(id)arg1 imageProvider:(id)arg2 ;
-(id)initWithAvatarRecord:(id)arg1 environment:(id)arg2 ;
@end

