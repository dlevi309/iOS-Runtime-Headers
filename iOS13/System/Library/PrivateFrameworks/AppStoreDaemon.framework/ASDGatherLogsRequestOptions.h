/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
*/

#import <AppStoreDaemon/AppStoreDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface ASDGatherLogsRequestOptions : NSObject <NSCopying> {

	BOOL _verbose;
	NSString* _fileName;
	NSArray* _urlFilters;

}

@property (nonatomic,copy) NSString * fileName;               //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) BOOL verbose;                    //@synthesize verbose=_verbose - In the implementation block
@property (nonatomic,copy) NSArray * urlFilters;              //@synthesize urlFilters=_urlFilters - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(BOOL)verbose;
-(void)setVerbose:(BOOL)arg1 ;
-(NSArray *)urlFilters;
-(void)setUrlFilters:(NSArray *)arg1 ;
@end

