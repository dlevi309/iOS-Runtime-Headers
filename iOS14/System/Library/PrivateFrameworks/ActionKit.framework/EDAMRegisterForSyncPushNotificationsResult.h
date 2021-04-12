/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSharedSecret:(NSData *)arg1 ;
-(NSData *)sharedSecret;
@end

