/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)query;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)itemsShownCounts;
-(long long)launchSource;
-(unsigned char)consumerSubtype;
-(id)initWithLaunchSource:(long long)arg1 query:(id)arg2 itemsShownCounts:(id)arg3 consumerSubtype:(unsigned char)arg4 ;
@end

