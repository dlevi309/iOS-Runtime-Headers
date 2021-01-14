/*
* Generated on Thursday, January 14, 2021 at 2:23:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(long long)changeType;
-(NSString *)recordIdentifier;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithRecordIdentifier:(id)arg1 changeType:(long long)arg2 ;
@end

