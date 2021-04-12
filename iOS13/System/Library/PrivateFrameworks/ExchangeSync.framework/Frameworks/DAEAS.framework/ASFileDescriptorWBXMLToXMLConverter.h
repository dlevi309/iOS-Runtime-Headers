/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASWBXMLToXMLConverter.h>

@interface ASFileDescriptorWBXMLToXMLConverter : ASWBXMLToXMLConverter {

	int _input;
	int _output;

}

@property (assign,nonatomic) int input;               //@synthesize input=_input - In the implementation block
@property (assign,nonatomic) int output;              //@synthesize output=_output - In the implementation block
-(int)input;
-(void)setInput:(int)arg1 ;
-(int)output;
-(void)setOutput:(int)arg1 ;
-(BOOL)runSynchronously;
-(void)outputString:(id)arg1 ;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(id)initWithInputFD:(int)arg1 outputFD:(int)arg2 usingMetadata:(BOOL)arg3 ;
@end

