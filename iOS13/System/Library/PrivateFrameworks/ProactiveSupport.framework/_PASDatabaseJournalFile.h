/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/


@class NSString;

@interface _PASDatabaseJournalFile : NSObject {

	NSString* _path;
	unsigned long long _len;
	unsigned long long _readCursor;
	int _fd;
	BOOL _written;
	BOOL _dead;

}

@property (nonatomic,readonly) BOOL isFullyRead; 
@property (nonatomic,readonly) BOOL isAlive; 
@property (nonatomic,readonly) unsigned long long length; 
-(id)init;
-(void)dealloc;
-(unsigned long long)length;
-(id)description;
-(void)clear;
-(id)initWithPath:(id)arg1 ;
-(void)destroy;
-(void)write:(id)arg1 ;
-(void)destroyAndUnlinkIfEmpty;
-(BOOL)isFullyRead;
-(BOOL)isAlive;
-(id)read;
-(void)unlink;
@end

