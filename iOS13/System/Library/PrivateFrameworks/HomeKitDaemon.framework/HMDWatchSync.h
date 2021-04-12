/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@class NSUUID;

@interface HMDWatchSync : HMFObject {

	BOOL _inProgress;
	unsigned long long _syncOption;
	NSUUID* _syncIdentifier;

}

@property (assign,nonatomic) unsigned long long syncOption;               //@synthesize syncOption=_syncOption - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * syncIdentifier;              //@synthesize syncIdentifier=_syncIdentifier - In the implementation block
@property (assign,nonatomic) BOOL inProgress;                             //@synthesize inProgress=_inProgress - In the implementation block
-(id)description;
-(BOOL)inProgress;
-(void)setInProgress:(BOOL)arg1 ;
-(NSUUID *)syncIdentifier;
-(unsigned long long)syncOption;
-(id)initWithSyncOption:(unsigned long long)arg1 ;
-(void)setSyncOption:(unsigned long long)arg1 ;
@end

