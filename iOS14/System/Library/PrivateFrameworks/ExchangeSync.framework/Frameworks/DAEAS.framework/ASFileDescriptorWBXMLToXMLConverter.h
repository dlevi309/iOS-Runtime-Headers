/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)output;
-(void)setInput:(int)arg1 ;
-(BOOL)runSynchronously;
-(void)setOutput:(int)arg1 ;
-(void)outputString:(id)arg1 ;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(id)initWithInputFD:(int)arg1 outputFD:(int)arg2 usingMetadata:(BOOL)arg3 ;
@end

