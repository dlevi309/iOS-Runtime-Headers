/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@class NSURL, NSDate, NSString;

@interface DSGeneralLogFile : NSObject {

	int _logVersion;
	NSURL* _url;
	NSDate* _restoreDate;
	NSDate* _updateDate;
	NSDate* _logStartDate;
	NSString* _hardwareModel;
	NSString* _currentOSVersion;
	NSString* _serialNumber;

}

@property (nonatomic,readonly) NSURL * url;                              //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDate * restoreDate;                     //@synthesize restoreDate=_restoreDate - In the implementation block
@property (nonatomic,readonly) NSDate * updateDate;                      //@synthesize updateDate=_updateDate - In the implementation block
@property (nonatomic,readonly) NSDate * logStartDate;                    //@synthesize logStartDate=_logStartDate - In the implementation block
@property (nonatomic,readonly) NSString * hardwareModel;                 //@synthesize hardwareModel=_hardwareModel - In the implementation block
@property (nonatomic,readonly) NSString * currentOSVersion;              //@synthesize currentOSVersion=_currentOSVersion - In the implementation block
@property (nonatomic,readonly) NSString * serialNumber;                  //@synthesize serialNumber=_serialNumber - In the implementation block
@property (nonatomic,readonly) int logVersion;                           //@synthesize logVersion=_logVersion - In the implementation block
-(NSString *)serialNumber;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)url;
-(NSDate *)updateDate;
-(NSString *)hardwareModel;
-(NSString *)currentOSVersion;
-(NSDate *)logStartDate;
-(BOOL)parseDetailsWithURL:(id)arg1 ;
-(BOOL)parseHeadersWithLine:(id)arg1 ;
-(BOOL)enumerateLogLinesWithIDs:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(NSDate *)restoreDate;
-(int)logVersion;
@end

