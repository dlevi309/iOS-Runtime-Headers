/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTArchiver : NSObject {

	archiveRef _archive;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)extractArchiveAtURL:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)closeArchive;
-(id)initWithOutputURL:(id)arg1 compress:(BOOL)arg2 ;
-(void)addDirectoryToArchive:(id)arg1 ;
-(void)addFileToArchive:(id)arg1 ;
@end

