/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)fd;
-(NSString *)path;
-(id)initWithFd:(int)arg1 path:(id)arg2 ;
-(unsigned long long)hash;
-(BOOL)isEqualToTempfileDescr:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

