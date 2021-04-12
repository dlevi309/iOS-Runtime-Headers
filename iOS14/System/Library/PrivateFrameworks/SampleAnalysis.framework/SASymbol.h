/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/


@class NSString, NSMutableArray;

@interface SASymbol : NSObject {

	unsigned long long _offsetIntoSegment;
	unsigned long long _length;
	NSString* _name;
	NSMutableArray* _sourceInfos;

}

@property (readonly) unsigned long long offsetIntoSegment; 
@property (readonly) unsigned long long length; 
@property (readonly) NSString * name; 
@property (readonly) unsigned long long offsetIntoTextSegment; 
-(id)debugDescription;
-(unsigned long long)length;
-(NSString *)name;
-(unsigned long long)offsetIntoSegment;
-(unsigned long long)offsetIntoTextSegment;
@end

