/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSString;

@interface FCFeedTransformationFeedThrottle : NSObject <FCFeedTransforming> {

	NSString* _feedID;
	unsigned long long _limit;

}

@property (nonatomic,copy) NSString * feedID;                       //@synthesize feedID=_feedID - In the implementation block
@property (assign,nonatomic) unsigned long long limit;              //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithFeedID:(id)arg1 limit:(unsigned long long)arg2 ;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(NSString *)feedID;
-(void)setFeedID:(NSString *)arg1 ;
@end

