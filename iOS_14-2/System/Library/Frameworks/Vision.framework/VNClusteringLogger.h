/*
* Generated on Thursday, January 14, 2021 at 2:23:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


#import <Vision/Vision-Structs.h>
@class NSURL, NSString;

@interface VNClusteringLogger : NSObject {

	BOOL _logEnabled;
	NSURL* _logFolderURL;
	NSURL* _logFileURL;
	NSString* _fileNameBase;

}

@property (readonly) NSURL * logFolderURL;                 //@synthesize logFolderURL=_logFolderURL - In the implementation block
@property (readonly) NSURL * logFileURL;                   //@synthesize logFileURL=_logFileURL - In the implementation block
@property (readonly) BOOL logEnabled;                      //@synthesize logEnabled=_logEnabled - In the implementation block
@property (readonly) NSString * fileNameBase;              //@synthesize fileNameBase=_fileNameBase - In the implementation block
+(id)padStringWithSpaces:(id)arg1 toSize:(long long)arg2 ;
+(void)appendString:(id)arg1 toLogFile:(id)arg2 ;
+(id)currentDateTime;
+(BOOL)isLogEnabled;
-(id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2 logFileNameBase:(id)arg3 ;
-(id)initWithOptions:(id)arg1 logEnabled:(BOOL)arg2 ;
-(void)resetFileNameURLWithCurentDateTime;
-(void)logString:(id)arg1 ;
-(void)logClusterMap:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 level:(id)arg2 ;
-(void)logClusterMapL0:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 ;
-(void)logClusterLookupMapL0:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 ;
-(void)logClusterMapL1:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 ;
-(NSURL *)logFolderURL;
-(void)logClusterLookupMapL1:(const map<long long, std::__1::vector<long long, std::__1::allocator<long long> >, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::vector<long long, std::__1::allocator<long long> > > > >*)arg1 ;
-(NSURL *)logFileURL;
-(BOOL)logEnabled;
-(NSString *)fileNameBase;
@end

