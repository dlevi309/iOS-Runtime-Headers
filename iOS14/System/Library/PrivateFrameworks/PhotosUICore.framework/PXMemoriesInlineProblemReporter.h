/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PHMemory, NSArray;

@interface PXMemoriesInlineProblemReporter : NSObject {

	PHMemory* _memory;
	NSArray* _features;

}

@property (nonatomic,retain) PHMemory * memory;               //@synthesize memory=_memory - In the implementation block
@property (nonatomic,retain) NSArray * features;              //@synthesize features=_features - In the implementation block
-(PHMemory *)memory;
-(NSArray *)features;
-(id)initWithMemory:(id)arg1 features:(id)arg2 ;
-(id)feedbackMailViewController;
-(id)_reportStringForFeatures;
-(void)setFeatures:(NSArray *)arg1 ;
-(id)_disclaimerText;
-(void)setMemory:(PHMemory *)arg1 ;
-(id)_headerText;
-(id)_infoText;
@end

