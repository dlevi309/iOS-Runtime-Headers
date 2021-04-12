/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libcoreroutine.dylib/RTNotification.h>

@class NSString, NSArray;

@interface RTWalletManagerNotificationPassUsed : RTNotification {

	NSString* _passTypeIdentifier;
	long long _source;
	NSArray* _storeIDs;

}

@property (nonatomic,readonly) NSString * passTypeIdentifier;              //@synthesize passTypeIdentifier=_passTypeIdentifier - In the implementation block
@property (nonatomic,readonly) long long source;                           //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) NSArray * storeIDs;                    //@synthesize storeIDs=_storeIDs - In the implementation block
-(long long)source;
-(NSArray *)storeIDs;
-(NSString *)passTypeIdentifier;
-(id)initWithPassTypeIdentifier:(id)arg1 source:(long long)arg2 info:(id)arg3 ;
@end

