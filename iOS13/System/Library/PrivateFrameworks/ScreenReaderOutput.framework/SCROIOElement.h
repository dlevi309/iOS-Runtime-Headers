/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
*/

#import <ScreenReaderOutput/ScreenReaderOutput-Structs.h>
#import <libobjc.A.dylib/SCROIOElementProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface SCROIOElement : NSObject <SCROIOElementProtocol, NSCopying> {

	unsigned _ioObject;
	int _identifier;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)identifier;
-(int)transport;
-(id)initWithIOObject:(unsigned)arg1 ;
-(unsigned)ioObject;
@end

