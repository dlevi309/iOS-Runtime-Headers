/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASWBXMLToXMLConverter.h>
#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSInputStream, NSOutputStream, NSString;

@interface ASStreamWBXMLToXMLConverter : ASWBXMLToXMLConverter <NSStreamDelegate> {

	NSInputStream* _input;
	NSOutputStream* _output;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(BOOL)runSynchronously;
-(void)outputString:(id)arg1 ;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(id)initWithWBXMLInput:(id)arg1 forOutput:(id)arg2 usingMetadata:(BOOL)arg3 ;
@end

