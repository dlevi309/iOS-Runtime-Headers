/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SACallTreeNode.h>
#import <libobjc.A.dylib/SAJSONSerialization.h>

@class SAFrame, NSMutableArray, NSArray, NSString;

@interface SACallTreeFrame : SACallTreeNode <SAJSONSerialization> {

	BOOL _isLeafFrame;
	SAFrame* _frame;
	NSMutableArray* _children;

}

@property (readonly) SAFrame * frame;                               //@synthesize frame=_frame - In the implementation block
@property (readonly) NSArray * childFrames; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SAFrame *)frame;
-(NSArray *)childFrames;
-(void)writeJSONDictionaryEntriesToStream:(id)arg1 ;
-(id)initWithFrame:(id)arg1 startSampleIndex:(unsigned long long)arg2 sampleCount:(unsigned long long)arg3 isLeafFrame:(BOOL)arg4 ;
@end

