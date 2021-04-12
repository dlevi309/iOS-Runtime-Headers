/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDOperation.h>

@class DOMNode, WebFrame;

@interface DDWebKitOperation : DDOperation {

	DOMNode* _startNode;
	int _startOffset;
	DOMNode* _endNode;
	int _endOffset;

}

@property (nonatomic,retain) DOMNode * startNode;               //@synthesize startNode=_startNode - In the implementation block
@property (assign) int startOffset;                             //@synthesize startOffset=_startOffset - In the implementation block
@property (nonatomic,retain) DOMNode * endNode;                 //@synthesize endNode=_endNode - In the implementation block
@property (assign) int endOffset;                               //@synthesize endOffset=_endOffset - In the implementation block
@property (nonatomic,retain) WebFrame * container; 
-(void)cleanup;
-(int)startOffset;
-(int)endOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)setEndOffset:(int)arg1 ;
-(void)dispatchContainerModificationBlock:(/*^block*/id)arg1 ;
-(BOOL)containerIsReady;
-(BOOL)needsToStartOver;
-(BOOL)doURLificationOnDocument;
-(id)newOperationForStartingOver;
-(id)newOperationForContinuation;
-(void)_applyContainerRestrictionsToTypes;
-(BOOL)_containerReadyForDetection;
-(void)_updateGenerationNumber;
-(BOOL)_rangeValidForContainer;
-(DDScanQueryRef)_createScanQueryForBackend;
-(void)setStartNode:(DOMNode *)arg1 ;
-(void)setEndNode:(DOMNode *)arg1 ;
-(DOMNode *)startNode;
-(DOMNode *)endNode;
@end

