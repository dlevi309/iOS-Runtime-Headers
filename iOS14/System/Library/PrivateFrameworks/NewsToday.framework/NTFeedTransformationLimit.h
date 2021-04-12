/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/NTFeedTransforming.h>

@class NSString;

@interface NTFeedTransformationLimit : NSObject <NTFeedTransforming> {

	unsigned long long _limit;

}

@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLimit:(unsigned long long)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
@end

