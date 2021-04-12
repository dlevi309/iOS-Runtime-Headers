/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@class NSFileHandle;

@interface NEFileHandle : NSObject {

	BOOL _launchOwnerWhenReadable;
	NSFileHandle* _handle;

}

@property (readonly) unsigned long long type; 
@property (readonly) NSObject*<OS_xpc_object> dictionary; 
@property (readonly) BOOL launchOwnerWhenReadable;                     //@synthesize launchOwnerWhenReadable=_launchOwnerWhenReadable - In the implementation block
@property (readonly) NSFileHandle * handle;                            //@synthesize handle=_handle - In the implementation block
+(id)fileHandleFromDictionary:(id)arg1 ;
-(unsigned long long)type;
-(NSObject*<OS_xpc_object>)dictionary;
-(NSFileHandle *)handle;
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(BOOL)arg2 ;
-(BOOL)launchOwnerWhenReadable;
@end

