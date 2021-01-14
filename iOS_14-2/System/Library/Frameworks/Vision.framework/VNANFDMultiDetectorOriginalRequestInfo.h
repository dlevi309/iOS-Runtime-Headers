/*
* Generated on Thursday, January 14, 2021 at 2:23:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/


@class NSString;

@interface VNANFDMultiDetectorOriginalRequestInfo : NSObject {

	NSString* _requestRevisionKey;
	unsigned long long _originalRequestResultsIndex;

}

@property (readonly) NSString * requestRevisionKey;                               //@synthesize requestRevisionKey=_requestRevisionKey - In the implementation block
@property (readonly) unsigned long long originalRequestResultsIndex;              //@synthesize originalRequestResultsIndex=_originalRequestResultsIndex - In the implementation block
+(id)requestClassToMultiDetectorClassPerRequestRevision;
-(unsigned long long)originalRequestResultsIndex;
-(id)initWithProcessingOptionRequestRevisionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2 ;
-(NSString *)requestRevisionKey;
@end

