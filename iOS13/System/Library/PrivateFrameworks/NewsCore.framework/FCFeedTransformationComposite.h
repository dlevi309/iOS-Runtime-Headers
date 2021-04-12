/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSMutableArray, NSArray, NSString;

@interface FCFeedTransformationComposite : NSObject <FCFeedTransforming> {

	BOOL _shouldLogTransformationResults;
	NSMutableArray* _transformationLogs;
	NSArray* _feedTransformations;

}

@property (nonatomic,copy) NSArray * feedTransformations;                        //@synthesize feedTransformations=_feedTransformations - In the implementation block
@property (nonatomic,readonly) BOOL shouldLogTransformationResults;              //@synthesize shouldLogTransformationResults=_shouldLogTransformationResults - In the implementation block
@property (nonatomic,readonly) NSMutableArray * transformationLogs;              //@synthesize transformationLogs=_transformationLogs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(void)setFeedTransformations:(NSArray *)arg1 ;
-(id)initWithFeedTransformations:(id)arg1 ;
-(NSArray *)feedTransformations;
-(BOOL)shouldLogTransformationResults;
-(NSMutableArray *)transformationLogs;
-(id)initWithFeedTransformations:(id)arg1 logTransformationResults:(BOOL)arg2 ;
@end

