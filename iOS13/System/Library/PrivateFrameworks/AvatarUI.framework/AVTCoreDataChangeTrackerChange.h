/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarRecordChange.h>

@class NSString;

@interface AVTCoreDataChangeTrackerChange : NSObject <AVTAvatarRecordChange> {

	NSString* _recordIdentifier;
	long long _changeType;

}

@property (nonatomic,readonly) NSString * recordIdentifier;              //@synthesize recordIdentifier=_recordIdentifier - In the implementation block
@property (nonatomic,readonly) long long changeType;                     //@synthesize changeType=_changeType - In the implementation block
+(long long)trackerChangeTypeFromPersistentChangeType:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)changeType;
-(NSString *)recordIdentifier;
-(id)initWithRecordIdentifier:(id)arg1 changeType:(long long)arg2 ;
@end

