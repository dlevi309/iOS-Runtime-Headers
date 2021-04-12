/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)endOffset;
-(void)setStartOffset:(int)arg1 ;
-(void)setEndOffset:(int)arg1 ;
-(void)cleanup;
-(DOMNode *)endNode;
-(int)startOffset;
-(DOMNode *)startNode;
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
@end

