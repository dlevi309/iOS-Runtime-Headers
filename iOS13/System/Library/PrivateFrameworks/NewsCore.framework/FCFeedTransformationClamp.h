/*
* Generated on Monday, March 1, 2021 at 2:32:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class FCFeedRange, NSString;

@interface FCFeedTransformationClamp : NSObject <FCFeedTransforming> {

	FCFeedRange* _feedRange;

}

@property (nonatomic,retain) FCFeedRange * feedRange;               //@synthesize feedRange=_feedRange - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithDateRange:(id)arg1 ;
+(id)transformationWithFeedRange:(id)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(FCFeedRange *)feedRange;
@end

