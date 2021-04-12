/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@interface SACSSymbolOwnerWrapper : NSObject {

	BOOL _hasTextExecSegment;
	BOOL _isSparse;
	CSTypeRef _symbolOwner;
	CSRange _textSegmentRange;

}

@property (readonly) CSTypeRef symbolOwner;                 //@synthesize symbolOwner=_symbolOwner - In the implementation block
@property (readonly) CSRange textSegmentRange;              //@synthesize textSegmentRange=_textSegmentRange - In the implementation block
@property (readonly) BOOL hasTextExecSegment;               //@synthesize hasTextExecSegment=_hasTextExecSegment - In the implementation block
@property (readonly) BOOL isSparse;                         //@synthesize isSparse=_isSparse - In the implementation block
-(void)dealloc;
-(BOOL)isSparse;
-(BOOL)hasTextExecSegment;
-(id)initWithCSSymbolOwner:(CSTypeRef)arg1 isSparse:(BOOL)arg2 ;
-(CSTypeRef)symbolOwner;
-(CSRange)textSegmentRange;
@end

