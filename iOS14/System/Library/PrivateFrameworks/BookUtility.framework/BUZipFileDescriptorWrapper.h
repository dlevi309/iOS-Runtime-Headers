/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)fileDescriptor;
-(NSObject*<OS_dispatch_group>)accessGroup;
-(void)setAccessGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(void)dealloc;
-(void)beginAccess;
-(void)endAccess;
-(id)initWithFileDescriptor:(int)arg1 queue:(id)arg2 ;
-(id<BUReadChannel>)readChannel;
-(void)waitForAccessToEnd;
@end

