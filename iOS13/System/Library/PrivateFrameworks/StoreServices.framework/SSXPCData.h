/*
* Generated on Monday, March 1, 2021 at 2:31:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSData.h>

@protocol OS_xpc_object;
@class NSObject;

@interface SSXPCData : NSData {

	NSObject*<OS_xpc_object> _xpcData;

}

@property (nonatomic,readonly) NSObject*<OS_xpc_object> xpcData;              //@synthesize xpcData=_xpcData - In the implementation block
-(void)dealloc;
-(unsigned long long)length;
-(const void*)bytes;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<OS_xpc_object>)xpcData;
-(id)initWithXPCData:(id)arg1 ;
@end

