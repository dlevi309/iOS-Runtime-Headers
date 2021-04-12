/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


@class _OSLogDirectoryReference;

@interface _OSLogCollectionReference : NSObject {

	_OSLogDirectoryReference* _diagnosticsDirectoryReference;
	_OSLogDirectoryReference* _timesyncReference;
	_OSLogDirectoryReference* _UUIDTextReference;

}

@property (nonatomic,readonly) _OSLogDirectoryReference * diagnosticsDirectoryReference;              //@synthesize diagnosticsDirectoryReference=_diagnosticsDirectoryReference - In the implementation block
@property (nonatomic,readonly) _OSLogDirectoryReference * timesyncReference;                          //@synthesize timesyncReference=_timesyncReference - In the implementation block
@property (nonatomic,readonly) _OSLogDirectoryReference * UUIDTextReference;                          //@synthesize UUIDTextReference=_UUIDTextReference - In the implementation block
+(id)referenceWithURL:(id)arg1 error:(id*)arg2 ;
+(id)localDBRefWithError:(id*)arg1 ;
-(void)close;
-(_OSLogDirectoryReference *)diagnosticsDirectoryReference;
-(_OSLogDirectoryReference *)UUIDTextReference;
-(_OSLogDirectoryReference *)timesyncReference;
-(id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3 ;
@end

