/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSData;

@interface EDAMRegisterForSyncPushNotificationsResult : FATObject {

	NSData* _sharedSecret;

}

@property (nonatomic,retain) NSData * sharedSecret;              //@synthesize sharedSecret=_sharedSecret - In the implementation block
+(id)structName;
+(id)structFields;
-(NSData *)sharedSecret;
-(void)setSharedSecret:(NSData *)arg1 ;
@end

