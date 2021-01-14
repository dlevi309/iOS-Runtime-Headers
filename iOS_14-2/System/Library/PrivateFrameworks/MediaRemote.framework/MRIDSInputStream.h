/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MRAVBufferedInputStream.h>

@class MRIDSConnectivityManager, NSString;

@interface MRIDSInputStream : MRAVBufferedInputStream {

	MRIDSConnectivityManager* _connection;
	long long _type;
	NSString* _destination;
	NSString* _session;

}
-(id)initWithConnection:(id)arg1 type:(long long)arg2 destination:(id)arg3 session:(id)arg4 ;
-(void)dealloc;
@end

