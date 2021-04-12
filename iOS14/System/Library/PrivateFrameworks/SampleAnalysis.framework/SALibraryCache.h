/*
* Generated on Thursday, January 14, 2021 at 2:26:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

@class NSUUID, NSArray;


@protocol SALibraryCache <NSObject>
@property (readonly) NSUUID * uuid; 
@property (readonly) NSArray * binaryLoadInfos; 
@property (readonly) unsigned long long startAddress; 
@property (readonly) unsigned long long endAddress; 
@property (readonly) unsigned long long textSegmentsStartAddress; 
@property (readonly) unsigned long long textSegmentsEndAddress; 
@required
-(NSUUID *)uuid;
-(unsigned long long)startAddress;
-(unsigned long long)endAddress;
-(NSArray *)binaryLoadInfos;
-(unsigned long long)textSegmentsStartAddress;
-(unsigned long long)textSegmentsEndAddress;

@end

