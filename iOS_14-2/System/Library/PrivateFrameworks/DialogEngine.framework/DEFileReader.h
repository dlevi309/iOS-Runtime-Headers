/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/DEReader.h>

@class NSURL, NSFileHandle;

@interface DEFileReader : NSObject <DEReader> {

	NSURL* _src;
	NSFileHandle* _file;

}

@property (nonatomic,retain) NSURL * src;                      //@synthesize src=_src - In the implementation block
@property (nonatomic,retain) NSFileHandle * file;              //@synthesize file=_file - In the implementation block
-(NSURL *)src;
-(NSFileHandle *)file;
-(void)setFile:(NSFileHandle *)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(id)readDataOfLength:(unsigned long long)arg1 ;
-(void)setSrc:(NSURL *)arg1 ;
-(id)readData;
-(void)dealloc;
@end

