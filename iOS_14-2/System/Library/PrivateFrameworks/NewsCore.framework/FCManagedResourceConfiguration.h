/*
* Generated on Thursday, January 14, 2021 at 2:21:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/NewsCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FCManagedResourceConfiguration : NSObject <NSCopying> {

	NSString* _resourceID;
	long long _refreshRate;

}

@property (nonatomic,copy,readonly) NSString * resourceID;              //@synthesize resourceID=_resourceID - In the implementation block
@property (nonatomic,readonly) long long refreshRate;                   //@synthesize refreshRate=_refreshRate - In the implementation block
-(long long)refreshRate;
-(id)init;
-(NSString *)resourceID;
-(id)initWithResourceID:(id)arg1 refreshRate:(long long)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

