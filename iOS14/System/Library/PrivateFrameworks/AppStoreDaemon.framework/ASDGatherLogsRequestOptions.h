/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setVerbose:(BOOL)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
-(NSArray *)urlFilters;
-(void)setUrlFilters:(NSArray *)arg1 ;
-(NSString *)fileName;
-(BOOL)verbose;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

