/*
* Generated on Thursday, January 14, 2021 at 2:28:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@protocol TSUReadChannel, OS_dispatch_data;
@class NSObject, NSString;

@interface TSUReadChannelInputStreamAdapter : NSObject <SFUInputStream> {

	id<TSUReadChannel> _readChannel;
	NSObject*<OS_dispatch_data> _leftoverData;
	long long _offset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(BOOL)canSeek;
-(long long)offset;
-(void)seekToOffset:(long long)arg1 ;
-(void)dealloc;
-(id)initWithReadChannel:(id)arg1 ;
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
@end

