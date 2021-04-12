/*
* Generated on Monday, March 1, 2021 at 2:34:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BookUtility.framework/BookUtility
*/


@protocol BUReadChannel, OS_dispatch_group;
@class NSObject;

@interface BUZipFileDescriptorWrapper : NSObject {

	int _fileDescriptor;
	id<BUReadChannel> _readChannel;
	NSObject*<OS_dispatch_group> _accessGroup;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_group> accessGroup;              //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,readonly) int fileDescriptor;                                  //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (nonatomic,readonly) id<BUReadChannel> readChannel;                       //@synthesize readChannel=_readChannel - In the implementation block
-(id)init;
-(void)dealloc;
-(int)fileDescriptor;
-(NSObject*<OS_dispatch_group>)accessGroup;
-(void)setAccessGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(id<BUReadChannel>)readChannel;
-(id)initWithFileDescriptor:(int)arg1 queue:(id)arg2 ;
-(void)waitForAccessToEnd;
-(void)beginAccess;
-(void)endAccess;
@end

