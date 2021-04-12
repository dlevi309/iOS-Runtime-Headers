/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying> {

	unsigned long long _threadID;
	NSString* _threadDescription;

}

@property (nonatomic,readonly) unsigned long long threadID; 
@property (nonatomic,readonly) NSString * threadDescription; 
+(void)initialize;
-(id)initWithObject:(id)arg1 ;
-(id)init;
-(id)description;
-(unsigned long long)threadID;
-(unsigned long long)hash;
-(id)initWithDescription:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSString *)threadDescription;
-(id)_initWithThreadID:(unsigned long long)arg1 description:(id)arg2 ;
-(id)_allCurrentThreadIDs;
@end

