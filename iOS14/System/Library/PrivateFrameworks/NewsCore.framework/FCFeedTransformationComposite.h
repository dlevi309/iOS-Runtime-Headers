/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setFeedTransformations:(NSArray *)arg1 ;
-(NSArray *)feedTransformations;
-(BOOL)shouldLogTransformationResults;
-(NSMutableArray *)transformationLogs;
-(id)initWithFeedTransformations:(id)arg1 logTransformationResults:(BOOL)arg2 ;
-(id)transformFeedItems:(id)arg1 ;
-(id)initWithFeedTransformations:(id)arg1 ;
@end

