/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <libobjc.A.dylib/SFUInputStream.h>

@class NSString;

@interface SFUFileInputStream : NSObject <SFUInputStream> {

	int mFd;
	BOOL mIsCachingDisabled;
	long long mStartOffset;
	long long mCurrentOffset;
	long long mEndOffset;

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
-(unsigned long long)readToBuffer:(char*)arg1 size:(unsigned long long)arg2 ;
-(void)disableSystemCaching;
-(void)enableSystemCaching;
-(id)closeLocalStream;
-(id)initWithPath:(id)arg1 offset:(long long)arg2 ;
-(id)initWithFileDescriptor:(int)arg1 offset:(long long)arg2 length:(long long)arg3 ;
-(id)initWithPath:(id)arg1 offset:(long long)arg2 length:(long long)arg3 ;
@end

