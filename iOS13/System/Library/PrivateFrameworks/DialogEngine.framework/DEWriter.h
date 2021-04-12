/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DialogEngine.framework/DialogEngine
*/


@class NSURL, NSFileHandle, NSMutableData;

@interface DEWriter : NSObject {

	NSURL* _dest;
	NSFileHandle* _file;
	NSMutableData* _contents;

}

@property (nonatomic,retain) NSURL * dest;                          //@synthesize dest=_dest - In the implementation block
@property (nonatomic,retain) NSFileHandle * file;                   //@synthesize file=_file - In the implementation block
@property (nonatomic,retain) NSMutableData * contents;              //@synthesize contents=_contents - In the implementation block
-(id)init;
-(void)dealloc;
-(void)close;
-(NSMutableData *)contents;
-(void)writeData:(id)arg1 ;
-(NSFileHandle *)file;
-(void)setContents:(NSMutableData *)arg1 ;
-(void)setFile:(NSFileHandle *)arg1 ;
-(id)initToURL:(id)arg1 ;
-(id)getContents;
-(NSURL *)dest;
-(void)setDest:(NSURL *)arg1 ;
@end

