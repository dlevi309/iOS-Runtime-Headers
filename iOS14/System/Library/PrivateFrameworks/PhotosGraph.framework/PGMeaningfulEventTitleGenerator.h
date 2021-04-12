/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGDefaultCollectionTitleGenerator.h>

@class NSString;

@interface PGMeaningfulEventTitleGenerator : PGDefaultCollectionTitleGenerator {

	NSString* _meaningLabel;
	BOOL _meaningIsReliable;

}
-(id)_title;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(id)_meaningLabelForTitle;
-(id)_timeTitle;
-(id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(BOOL)arg3 ;
@end

