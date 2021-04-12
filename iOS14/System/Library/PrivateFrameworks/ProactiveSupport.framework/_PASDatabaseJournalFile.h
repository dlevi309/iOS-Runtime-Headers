/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)clear;
-(id)init;
-(void)write:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)read;
-(void)destroy;
-(void)unlink;
-(unsigned long long)length;
-(id)description;
-(BOOL)isAlive;
-(BOOL)isFullyRead;
-(void)destroyAndUnlinkIfEmpty;
-(void)dealloc;
@end

