/*
* Generated on Thursday, January 14, 2021 at 2:21:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)transformationWithFeedRange:(id)arg1 ;
+(id)transformationWithDateRange:(id)arg1 ;
-(FCFeedRange *)feedRange;
-(void)setFeedRange:(FCFeedRange *)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
@end

