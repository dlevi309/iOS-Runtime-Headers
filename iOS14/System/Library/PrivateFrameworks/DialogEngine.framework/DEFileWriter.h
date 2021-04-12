/*
* Generated on Thursday, January 14, 2021 at 2:23:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/

#import <libobjc.A.dylib/DEWriter.h>

@class NSURL, NSFileHandle;

@interface DEFileWriter : NSObject <DEWriter> {

	NSURL* _dest;
	NSFileHandle* _file;

}

@property (nonatomic,retain) NSURL * dest;                     //@synthesize dest=_dest - In the implementation block
@property (nonatomic,retain) NSFileHandle * file;              //@synthesize file=_file - In the implementation block
-(NSFileHandle *)file;
-(NSURL *)dest;
-(void)setFile:(NSFileHandle *)arg1 ;
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(void)close;
-(void)writeData:(id)arg1 ;
-(void)setDest:(NSURL *)arg1 ;
-(void)dealloc;
@end

