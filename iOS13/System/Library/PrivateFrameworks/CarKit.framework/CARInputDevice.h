/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
*/


#import <CarKit/CarKit-Structs.h>
@class NSString;

@interface CARInputDevice : NSObject {

	NSString* _UUID;
	unsigned long long _senderID;

}

@property (nonatomic,readonly) NSString * UUID;                          //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) unsigned long long senderID;              //@synthesize senderID=_senderID - In the implementation block
-(NSString *)UUID;
-(void)_setUUID:(id)arg1 ;
-(unsigned long long)senderID;
-(void)_setSenderID:(unsigned long long)arg1 ;
-(id)initWithServiceClient:(IOHIDServiceClientRef)arg1 UUID:(id)arg2 ;
@end

