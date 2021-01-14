/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setRange:(NSRange)arg1 ;
-(id)initWithContainer:(id)arg1 ;
-(NSRange)range;
-(void)textDidChange:(id)arg1 ;
-(void)cleanup;
-(void)dispatchContainerModificationBlock:(/*^block*/id)arg1 ;
-(BOOL)needsToStartOver;
-(BOOL)doURLificationOnDocument;
-(id)newOperationForStartingOver;
-(id)newOperationForContinuation;
-(void)_updateGenerationNumber;
-(BOOL)_rangeValidForContainer;
-(DDScanQueryRef)_createScanQueryForBackend;
-(NSRange)_addResultToAttributes:(id)arg1 inStorage:(id)arg2 editing:(BOOL)arg3 ;
-(NSRange)_addResultsToAttributesInStorage:(id)arg1 ;
@end

