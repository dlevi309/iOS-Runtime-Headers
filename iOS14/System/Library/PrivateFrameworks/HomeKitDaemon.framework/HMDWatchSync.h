/*
* Generated on Thursday, January 14, 2021 at 2:25:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInProgress:(BOOL)arg1 ;
-(id)description;
-(BOOL)inProgress;
-(NSUUID *)syncIdentifier;
-(unsigned long long)syncOption;
-(id)initWithSyncOption:(unsigned long long)arg1 ;
-(void)setSyncOption:(unsigned long long)arg1 ;
@end

