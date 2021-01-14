/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/CoreDAVTask.h>

@class NSString, NSArray;

@interface CoreDAVSRVLookupTask : CoreDAVTask {

	NSString* _serviceString;
	NSArray* _fetchedRecords;
	CFHostRef _host;

}

@property (nonatomic,retain) NSString * serviceString;              //@synthesize serviceString=_serviceString - In the implementation block
@property (nonatomic,retain) NSArray * fetchedRecords;              //@synthesize fetchedRecords=_fetchedRecords - In the implementation block
@property (assign,nonatomic) CFHostRef host;                        //@synthesize host=_host - In the implementation block
-(void)setHost:(CFHostRef)arg1 ;
-(CFHostRef)host;
-(id)description;
-(void)dealloc;
-(void)performCoreDAVTask;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(id)initWithServiceString:(id)arg1 ;
-(NSArray *)fetchedRecords;
-(NSString *)serviceString;
-(void)setServiceString:(NSString *)arg1 ;
-(void)setFetchedRecords:(NSArray *)arg1 ;
@end

