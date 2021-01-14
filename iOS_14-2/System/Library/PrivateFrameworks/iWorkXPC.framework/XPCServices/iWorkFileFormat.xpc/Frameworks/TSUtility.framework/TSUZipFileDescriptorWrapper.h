/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/


@protocol OS_dispatch_group, TSUReadChannel;
@class NSObject;

@interface TSUZipFileDescriptorWrapper : NSObject {

	NSObject*<OS_dispatch_group> _accessGroup;
	int _fileDescriptor;
	id<TSUReadChannel> _readChannel;

}

@property (nonatomic,readonly) int fileDescriptor;                          //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,readonly) id<TSUReadChannel> readChannel;              //@synthesize readChannel=_readChannel - In the implementation block
-(id)init;
-(int)fileDescriptor;
-(void)dealloc;
-(void)beginAccess;
-(void)endAccess;
-(id)initWithFileDescriptor:(int)arg1 queue:(id)arg2 ;
-(id<TSUReadChannel>)readChannel;
-(void)waitForAccessToEnd;
@end

