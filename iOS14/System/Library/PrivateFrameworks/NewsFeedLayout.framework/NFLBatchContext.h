/*
* Generated on Thursday, January 14, 2021 at 2:28:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsFeedLayout.framework/NewsFeedLayout
*/

#import <NewsFeedLayout/NewsFeedLayout-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface NFLBatchContext : NSObject <NSCopying, NSSecureCoding> {

	NSString* _identifier;
	unsigned long long _batchType;

}

@property (nonatomic,readonly) unsigned long long batchType;              //@synthesize batchType=_batchType - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initForTesting;
-(id)initWithBatchType:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(unsigned long long)batchType;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

