/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class NSString;

@interface SASourceInfo : NSObject {

	unsigned _lineNum;
	unsigned _columnNum;
	unsigned long long _offsetIntoSegment;
	unsigned long long _length;
	NSString* _filePath;

}

@property (readonly) unsigned long long offsetIntoSegment; 
@property (readonly) unsigned long long length;                             //@synthesize length=_length - In the implementation block
@property (readonly) NSString * filePath;                                   //@synthesize filePath=_filePath - In the implementation block
@property (readonly) NSString * fileName; 
@property (readonly) unsigned lineNum;                                      //@synthesize lineNum=_lineNum - In the implementation block
@property (readonly) unsigned columnNum;                                    //@synthesize columnNum=_columnNum - In the implementation block
@property (readonly) unsigned long long offsetIntoTextSegment; 
-(NSString *)filePath;
-(id)debugDescription;
-(unsigned long long)length;
-(NSString *)fileName;
-(unsigned)lineNum;
-(unsigned long long)offsetIntoSegment;
-(unsigned)columnNum;
-(unsigned long long)offsetIntoTextSegment;
@end

