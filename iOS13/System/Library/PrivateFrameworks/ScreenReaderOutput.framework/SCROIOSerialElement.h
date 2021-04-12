/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)description;
-(int)identifier;
-(int)fileDescriptor;
-(id)initWithFileDescriptor:(int)arg1 ;
-(int)transport;
-(void)setFileDescriptor:(int)arg1 ;
@end

