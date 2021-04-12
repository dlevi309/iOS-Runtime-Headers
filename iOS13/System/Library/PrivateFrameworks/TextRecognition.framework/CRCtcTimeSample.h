/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRCtcTimeSample : NSObject {

	CRCtcCandidate _blank;
	CRCTCPriorityQueue=priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >, CRCTCPriorityQueue::QueueComparison>=vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}CRCtcCandidate}compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}}}QueueComparison}Bvector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}CRCtcCandidate}compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}}}}Ref _sample;

}

@property (assign) CRCTCPriorityQueue* sample;              //@synthesize sample=_sample - In the implementation block
@property (assign) CRCtcCandidate blank;                    //@synthesize blank=_blank - In the implementation block
-(id)init;
-(void)dealloc;
-(const vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >*)candidates;
-(void)addCandidate:(CRCtcCandidate)arg1 ;
-(void)setSample:(CRCTCPriorityQueue*)arg1 ;
-(CRCTCPriorityQueue*)sample;
-(CRCtcCandidate)blank;
-(void)setBlank:(CRCtcCandidate)arg1 ;
-(void)trimCandidates;
-(CRCtcCandidate)topCandidate;
@end

