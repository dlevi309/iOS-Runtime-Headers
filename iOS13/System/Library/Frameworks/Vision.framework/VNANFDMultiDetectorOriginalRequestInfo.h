/*
* Generated on Monday, March 1, 2021 at 2:30:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSString;

@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject {

	NSString* _requestRevisionKey;
	unsigned long long _originalRequestResultsIndex;

}

@property (readonly) NSString * requestRevisionKey;                               //@synthesize requestRevisionKey=_requestRevisionKey - In the implementation block
@property (readonly) unsigned long long originalRequestResultsIndex;              //@synthesize originalRequestResultsIndex=_originalRequestResultsIndex - In the implementation block
-(id)initWithProcessingOptionRequestRevisionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2 ;
-(NSString *)requestRevisionKey;
-(unsigned long long)originalRequestResultsIndex;
@end

