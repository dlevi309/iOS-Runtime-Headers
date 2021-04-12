/*
* Generated on Monday, March 1, 2021 at 2:34:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


#import <SampleAnalysis/SampleAnalysis-Structs.h>
@class NSString;

@interface SASourceInfo : NSObject {

	unsigned _lineNum;
	unsigned _columnNum;
	unsigned long long _offsetIntoTextSegment;
	unsigned long long _length;
	NSString* _filePath;

}

@property (readonly) unsigned long long offsetIntoTextSegment;              //@synthesize offsetIntoTextSegment=_offsetIntoTextSegment - In the implementation block
@property (readonly) unsigned long long length;                             //@synthesize length=_length - In the implementation block
@property (readonly) NSString * filePath;                                   //@synthesize filePath=_filePath - In the implementation block
@property (readonly) NSString * fileName; 
@property (readonly) unsigned lineNum;                                      //@synthesize lineNum=_lineNum - In the implementation block
@property (readonly) unsigned columnNum;                                    //@synthesize columnNum=_columnNum - In the implementation block
+(id)sourceInfoWithOffsetIntoTextSegment:(unsigned long long)arg1 length:(unsigned long long)arg2 lineNum:(unsigned)arg3 columnNum:(unsigned)arg4 filePath:(id)arg5 ;
+(id)sourceInfoWithCSSourceInfo:(CSTypeRef)arg1 textSegmentLoadAddress:(unsigned long long)arg2 ;
-(unsigned long long)length;
-(id)debugDescription;
-(NSString *)filePath;
-(NSString *)fileName;
-(unsigned long long)offsetIntoTextSegment;
-(unsigned)lineNum;
-(unsigned)columnNum;
@end

