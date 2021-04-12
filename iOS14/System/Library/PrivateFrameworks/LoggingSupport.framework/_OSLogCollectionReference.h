/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(_OSLogDirectoryReference *)UUIDTextReference;
-(void)close;
-(_OSLogDirectoryReference *)timesyncReference;
-(_OSLogDirectoryReference *)diagnosticsDirectoryReference;
-(id)initWithDiagnosticsDirectory:(id)arg1 timesyncDirectory:(id)arg2 UUIDTextDirectory:(id)arg3 ;
@end

