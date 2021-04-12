/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)initWithLimit:(unsigned long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end

