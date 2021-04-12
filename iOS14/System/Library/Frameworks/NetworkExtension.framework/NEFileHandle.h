/*
* Generated on Thursday, January 14, 2021 at 2:22:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initFromDictionary:(id)arg1 ;
-(id)initWithFileDescriptor:(int)arg1 launchOwnerWhenReadable:(BOOL)arg2 ;
-(NSFileHandle *)handle;
-(BOOL)launchOwnerWhenReadable;
-(NSObject*<OS_xpc_object>)dictionary;
-(unsigned long long)type;
@end

