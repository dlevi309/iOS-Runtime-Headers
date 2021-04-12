/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OSAnalyticsPrivate.framework/OSAnalyticsPrivate
*/


@protocol OSASyncProxyHandler;
@class NSArray;

@interface PCCEndpoint : NSObject {

	id<OSASyncProxyHandler> _delegate;
	unsigned _fileTimeout;
	NSArray* _deviceIds;

}

@property (assign) unsigned fileTimeout;               //@synthesize fileTimeout=_fileTimeout - In the implementation block
@property (readonly) NSArray * deviceIds;              //@synthesize deviceIds=_deviceIds - In the implementation block
-(void)runWithDelegate:(id)arg1 ;
-(BOOL)isDeviceNearby:(id)arg1 ;
-(id)synchronize:(id)arg1 withOptions:(id)arg2 ;
-(id)send:(id)arg1 message:(id)arg2 error:(id*)arg3 ;
-(id)send:(id)arg1 file:(id)arg2 metadata:(id)arg3 error:(id*)arg4 ;
-(unsigned)fileTimeout;
-(void)setFileTimeout:(unsigned)arg1 ;
-(NSArray *)deviceIds;
@end

