/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedPersonalizing;
@class NSString;

@interface FCFeedTransformationLowQualityContentFilter : NSObject <FCFeedTransforming> {

	id<FCFeedPersonalizing> _feedPersonalizer;

}

@property (nonatomic,retain) id<FCFeedPersonalizing> feedPersonalizer;              //@synthesize feedPersonalizer=_feedPersonalizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithPersonalizer:(id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(id<FCFeedPersonalizing>)feedPersonalizer;
-(void)setFeedPersonalizer:(id<FCFeedPersonalizing>)arg1 ;
@end

