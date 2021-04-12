/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol OS_os_log;
@class NSObject;

@interface PGLogging : NSObject {

	NSObject*<OS_os_log> _loggingConnection;

}

@property (readonly) NSObject*<OS_os_log> loggingConnection;              //@synthesize loggingConnection=_loggingConnection - In the implementation block
+(id)sharedLogging;
-(NSObject*<OS_os_log>)loggingConnection;
@end

