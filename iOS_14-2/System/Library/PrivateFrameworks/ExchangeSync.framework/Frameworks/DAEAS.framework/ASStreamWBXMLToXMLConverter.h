/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)runSynchronously;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)dealloc;
-(void)outputString:(id)arg1 ;
-(void)outputData:(id)arg1 ;
-(long long)readFromInput;
-(id)initWithWBXMLInput:(id)arg1 forOutput:(id)arg2 usingMetadata:(BOOL)arg3 ;
@end

