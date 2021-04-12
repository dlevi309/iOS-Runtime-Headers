/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <PhotosGraph/PGTitleGenerator.h>

@protocol PGEventEnrichment;
@class NSString;

@interface PGSpecBasedHighlightTitleGenerator : PGTitleGenerator {

	BOOL _createVerboseTitle;
	id<PGEventEnrichment> _collection;
	NSString* _meaningLabel;

}

@property (nonatomic,readonly) id<PGEventEnrichment> collection;              //@synthesize collection=_collection - In the implementation block
@property (nonatomic,readonly) NSString * meaningLabel;                       //@synthesize meaningLabel=_meaningLabel - In the implementation block
@property (nonatomic,readonly) BOOL createVerboseTitle;                       //@synthesize createVerboseTitle=_createVerboseTitle - In the implementation block
-(id<PGEventEnrichment>)collection;
-(NSString *)meaningLabel;
-(void)_generateTitleAndSubtitleWithResult:(/*^block*/id)arg1 ;
-(BOOL)createVerboseTitle;
-(id)initWithCollection:(id)arg1 meaningLabel:(id)arg2 createVerboseTitle:(BOOL)arg3 ;
@end

