/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/


@class NSString;

@interface SGDatabaseJournalFile : NSObject {

	NSString* _path;
	unsigned long long _len;
	int _fd;
	BOOL _written;
	BOOL _dead;

}
-(void)clear;
-(id)init;
-(void)write:(id)arg1 ;
-(id)initWithPath:(id)arg1 ;
-(id)read;
-(void)destroy;
-(void)unlink;
-(id)description;
-(void)destroyAndUnlinkIfEmpty;
-(void)dealloc;
@end

