/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
*/


@class NSArray, NSDictionary;

@interface DSGeneralLogCollector : NSObject {

	NSArray* _logFiles;
	NSDictionary* _friendlyAppNamesDictionary;
	NSArray* _logIDs;

}

@property (nonatomic,retain) NSArray * logFiles;                                     //@synthesize logFiles=_logFiles - In the implementation block
@property (nonatomic,retain) NSDictionary * friendlyAppNamesDictionary;              //@synthesize friendlyAppNamesDictionary=_friendlyAppNamesDictionary - In the implementation block
@property (nonatomic,retain) NSArray * logIDs;                                       //@synthesize logIDs=_logIDs - In the implementation block
+(id)latestUserLog;
+(id)latestRootLog;
-(void)getLogFiles;
-(id)logFilesFromEnumerator:(id)arg1 ;
-(NSArray *)logIDs;
-(NSArray *)logFiles;
-(id)initWithLogIDs:(id)arg1 ;
-(void)enumerateLogLinesWithBlock:(/*^block*/id)arg1 ;
-(void)setLogFiles:(NSArray *)arg1 ;
-(NSDictionary *)friendlyAppNamesDictionary;
-(void)setFriendlyAppNamesDictionary:(NSDictionary *)arg1 ;
-(void)setLogIDs:(NSArray *)arg1 ;
@end

