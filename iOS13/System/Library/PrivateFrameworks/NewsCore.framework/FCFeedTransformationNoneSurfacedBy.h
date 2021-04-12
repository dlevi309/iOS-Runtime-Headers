/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSSet, NSDictionary, NSString;

@interface FCFeedTransformationNoneSurfacedBy : NSObject <FCFeedTransforming> {

	NSSet* _tagIDs;
	NSDictionary* _feedContextByFeedID;

}

@property (nonatomic,copy) NSSet * tagIDs;                                  //@synthesize tagIDs=_tagIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * feedContextByFeedID;              //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithTagIDs:(id)arg1 feedContextByFeedID:(id)arg2 ;
-(id)transformFeedItems:(id)arg1 ;
-(void)setTagIDs:(NSSet *)arg1 ;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(NSDictionary *)feedContextByFeedID;
-(NSSet *)tagIDs;
@end

