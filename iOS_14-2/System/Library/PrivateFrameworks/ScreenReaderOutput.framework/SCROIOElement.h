/*
* Generated on Thursday, January 14, 2021 at 2:28:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(int)transport;
-(id)initWithIOObject:(unsigned)arg1 ;
-(unsigned long long)hash;
-(int)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(unsigned)ioObject;
@end

