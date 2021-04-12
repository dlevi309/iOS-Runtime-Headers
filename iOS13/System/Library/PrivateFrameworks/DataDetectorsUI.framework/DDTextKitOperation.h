/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDOperation.h>

@class UITextView;

@interface DDTextKitOperation : DDOperation {

	NSRange _range;
	int _editCount;

}

@property (nonatomic,retain) UITextView * container; 
@property (assign) NSRange range;                                 //@synthesize range=_range - In the implementation block
-(NSRange)range;
-(void)cleanup;
-(void)setRange:(NSRange)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(id)initWithContainer:(id)arg1 ;
-(void)dispatchContainerModificationBlock:(/*^block*/id)arg1 ;
-(BOOL)needsToStartOver;
-(BOOL)doURLificationOnDocument;
-(id)newOperationForStartingOver;
-(id)newOperationForContinuation;
-(void)_updateGenerationNumber;
-(BOOL)_rangeValidForContainer;
-(DDScanQueryRef)_createScanQueryForBackend;
-(NSRange)_addResultToAttributes:(id)arg1 inStorage:(id)arg2 ;
-(NSRange)_addResultsToAttributesInStorage:(id)arg1 ;
@end

