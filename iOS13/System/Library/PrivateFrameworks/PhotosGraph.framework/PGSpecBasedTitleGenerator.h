/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGTitleSpecDelegate.h>

@protocol PGSpecBasedTitleGeneratorDelegate;
@class NSSet, PGTitleSpecCollection, PGTitle, NSString;

@interface PGSpecBasedTitleGenerator : NSObject <PGTitleSpecDelegate> {

	NSSet* _moments;
	NSSet* _features;
	PGTitleSpecCollection* _specCollection;
	PGTitle* _title;
	id<PGSpecBasedTitleGeneratorDelegate> _delegate;
	unsigned long long _lineBreakBehavior;

}

@property (nonatomic,retain) NSSet * moments;                                     //@synthesize moments=_moments - In the implementation block
@property (nonatomic,retain) NSSet * features;                                    //@synthesize features=_features - In the implementation block
@property (nonatomic,retain) PGTitleSpecCollection * specCollection;              //@synthesize specCollection=_specCollection - In the implementation block
@property (nonatomic,readonly) PGTitle * title;                                   //@synthesize title=_title - In the implementation block
@property (assign,nonatomic) unsigned long long lineBreakBehavior;                //@synthesize lineBreakBehavior=_lineBreakBehavior - In the implementation block
@property (__weak) id<PGSpecBasedTitleGeneratorDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PGSpecBasedTitleGeneratorDelegate>)delegate;
-(void)setDelegate:(id<PGSpecBasedTitleGeneratorDelegate>)arg1 ;
-(PGTitle *)title;
-(id)_title;
-(NSSet *)features;
-(void)setFeatures:(NSSet *)arg1 ;
-(NSSet *)moments;
-(void)setMoments:(NSSet *)arg1 ;
-(unsigned long long)lineBreakBehavior;
-(void)setLineBreakBehavior:(unsigned long long)arg1 ;
-(id)titleSpec:(id)arg1 inputForArgument:(id)arg2 ;
-(id)initWithMoments:(id)arg1 memoryCategory:(unsigned long long)arg2 subcategory:(unsigned long long)arg3 ;
-(id)initWithMoments:(id)arg1 meaningLabel:(id)arg2 ;
-(id)initWithMoments:(id)arg1 features:(id)arg2 meaningLabel:(id)arg3 isAggregation:(BOOL)arg4 ;
-(id)initWithMoments:(id)arg1 features:(id)arg2 specCollection:(id)arg3 ;
-(id)_titleFromSpecs:(id)arg1 ;
-(PGTitleSpecCollection *)specCollection;
-(void)setSpecCollection:(PGTitleSpecCollection *)arg1 ;
@end

