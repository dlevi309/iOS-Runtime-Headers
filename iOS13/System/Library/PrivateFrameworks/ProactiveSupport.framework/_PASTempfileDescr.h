/*
* Generated on Monday, March 1, 2021 at 2:31:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProactiveSupport.framework/ProactiveSupport
*/

#import <ProactiveSupport/ProactiveSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface _PASTempfileDescr : NSObject <NSCopying> {

	int _fd;
	NSString* _path;

}

@property (nonatomic,readonly) int fd;                       //@synthesize fd=_fd - In the implementation block
@property (nonatomic,readonly) NSString * path;              //@synthesize path=_path - In the implementation block
+(id)tempfileDescrWithFd:(int)arg1 path:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)path;
-(int)fd;
-(id)initWithFd:(int)arg1 path:(id)arg2 ;
-(BOOL)isEqualToTempfileDescr:(id)arg1 ;
@end

