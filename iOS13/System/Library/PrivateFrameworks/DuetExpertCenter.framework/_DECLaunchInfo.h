/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface _DECLaunchInfo : NSObject <NSSecureCoding> {

	unsigned char _consumerSubtype;
	long long _launchSource;
	NSString* _query;
	NSDictionary* _itemsShownCounts;

}

@property (nonatomic,readonly) long long launchSource;                       //@synthesize launchSource=_launchSource - In the implementation block
@property (nonatomic,readonly) NSString * query;                             //@synthesize query=_query - In the implementation block
@property (nonatomic,readonly) unsigned char consumerSubtype;                //@synthesize consumerSubtype=_consumerSubtype - In the implementation block
@property (nonatomic,readonly) NSDictionary * itemsShownCounts;              //@synthesize itemsShownCounts=_itemsShownCounts - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)query;
-(NSDictionary *)itemsShownCounts;
-(long long)launchSource;
-(unsigned char)consumerSubtype;
-(id)initWithLaunchSource:(long long)arg1 query:(id)arg2 itemsShownCounts:(id)arg3 consumerSubtype:(unsigned char)arg4 ;
@end

