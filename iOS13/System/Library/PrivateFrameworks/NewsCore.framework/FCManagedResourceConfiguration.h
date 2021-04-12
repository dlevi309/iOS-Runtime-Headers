/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)refreshRate;
-(NSString *)resourceID;
-(id)initWithResourceID:(id)arg1 refreshRate:(long long)arg2 ;
@end

