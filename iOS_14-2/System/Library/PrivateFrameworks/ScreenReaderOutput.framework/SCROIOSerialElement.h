/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <ScreenReaderOutput/SCROIOElement.h>
#import <libobjc.A.dylib/SCROIOSerialElementProtocol.h>

@class NSString;

@interface SCROIOSerialElement : SCROIOElement <SCROIOSerialElementProtocol> {

	int _fileDescriptor;

}

@property (assign,nonatomic) int fileDescriptor;                    //@synthesize fileDescriptor=_fileDescriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)transport;
-(id)initWithFileDescriptor:(int)arg1 ;
-(NSString *)description;
-(int)fileDescriptor;
-(int)identifier;
-(void)setFileDescriptor:(int)arg1 ;
@end

