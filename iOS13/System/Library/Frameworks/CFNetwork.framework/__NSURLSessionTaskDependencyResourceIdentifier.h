/*
* Generated on Monday, March 1, 2021 at 2:30:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
*/

#import <CFNetwork/CFNetwork-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <NSCopying> {

	NSString* _URLPath;
	NSString* _mimeType;

}

@property (nonatomic,retain) NSString * URLPath;               //@synthesize URLPath=_URLPath - In the implementation block
@property (nonatomic,retain) NSString * mimeType;              //@synthesize mimeType=_mimeType - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWitURLPath:(id)arg1 mimeType:(id)arg2 ;
-(NSString *)URLPath;
-(void)setURLPath:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
@end

