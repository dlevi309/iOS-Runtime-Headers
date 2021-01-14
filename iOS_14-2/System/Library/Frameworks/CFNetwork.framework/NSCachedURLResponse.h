/*
* Generated on Thursday, January 14, 2021 at 2:20:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSCachedURLResponseInternal, NSURLResponse, NSData, NSDictionary;

@interface NSCachedURLResponse : NSObject <NSSecureCoding, NSCopying> {

	NSCachedURLResponseInternal* _internal;

}

@property (copy,readonly) NSURLResponse * response; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSDictionary * userInfo; 
@property (readonly) unsigned long long storagePolicy; 
+(BOOL)supportsSecureCoding;
-(id)dataArray;
-(id)initWithResponse:(id)arg1 dataArray:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4 ;
-(NSDictionary *)userInfo;
-(void)_reestablishInternalCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(id)initWithResponse:(id)arg1 data:(id)arg2 userInfo:(id)arg3 storagePolicy:(unsigned long long)arg4 ;
-(void)_deallocInternalCFCachedURLResponse;
-(id)_initWithCFCachedURLResponse:(CFCachedURLResponse*)arg1 ;
-(const CFCachedURLResponse*)_CFCachedURLResponse;
-(unsigned long long)storagePolicy;
-(id)initWithResponse:(id)arg1 data:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURLResponse *)response;
-(NSData *)data;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

