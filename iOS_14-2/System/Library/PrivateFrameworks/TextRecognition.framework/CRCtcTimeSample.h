/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
*/


#import <TextRecognition/TextRecognition-Structs.h>
@interface CRCtcTimeSample : NSObject {

	CRCtcCandidate _blank;
	CRCTCPriorityQueue=priority_queue<CRCtcCandidate, std::__1::vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >, CRCTCPriorityQueue::QueueComparison>=vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}CRCtcCandidate}compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}}}QueueComparison}Bvector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}CRCtcCandidate}compressed_pair<CRCtcCandidate *, std::__1::allocator<CRCtcCandidate> >=CRCtcCandidate}}}}Ref _sample;

}

@property (assign) CRCTCPriorityQueue* sample;              //@synthesize sample=_sample - In the implementation block
@property (assign) CRCtcCandidate blank;                    //@synthesize blank=_blank - In the implementation block
-(CRCTCPriorityQueue*)sample;
-(id)init;
-(void)addCandidate:(CRCtcCandidate)arg1 ;
-(CRCtcCandidate)blank;
-(void)setSample:(CRCTCPriorityQueue*)arg1 ;
-(const vector<CRCtcCandidate, std::__1::allocator<CRCtcCandidate> >*)candidates;
-(void)dealloc;
-(void)trimCandidates;
-(CRCtcCandidate)topCandidate;
-(void)setBlank:(CRCtcCandidate)arg1 ;
@end

