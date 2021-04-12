/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(CFHostRef)host;
-(void)setHost:(CFHostRef)arg1 ;
-(void)finishCoreDAVTaskWithError:(id)arg1 ;
-(void)performCoreDAVTask;
-(id)initWithServiceString:(id)arg1 ;
-(NSArray *)fetchedRecords;
-(NSString *)serviceString;
-(void)setServiceString:(NSString *)arg1 ;
-(void)setFetchedRecords:(NSArray *)arg1 ;
@end

