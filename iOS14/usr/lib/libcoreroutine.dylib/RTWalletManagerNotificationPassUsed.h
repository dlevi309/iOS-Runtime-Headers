/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)storeIDs;
-(NSString *)passTypeIdentifier;
-(long long)source;
-(id)initWithPassTypeIdentifier:(id)arg1 source:(long long)arg2 info:(id)arg3 ;
@end

