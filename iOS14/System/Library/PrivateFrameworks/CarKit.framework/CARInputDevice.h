/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)senderID;
-(NSString *)UUID;
-(void)_setUUID:(id)arg1 ;
-(id)initWithServiceClient:(IOHIDServiceClientRef)arg1 UUID:(id)arg2 ;
-(void)_setSenderID:(unsigned long long)arg1 ;
@end

