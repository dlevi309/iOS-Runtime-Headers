/*
* Generated on Thursday, January 14, 2021 at 2:26:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/


#import <libcoreroutine.dylib/libcoreroutine.dylib-Structs.h>
@interface RTArchiver : NSObject {

	archiveRef _archive;
	BOOL _valid;

}

@property (assign,nonatomic) BOOL valid;              //@synthesize valid=_valid - In the implementation block
+(BOOL)extractArchiveAtURL:(id)arg1 error:(id*)arg2 ;
-(void)setValid:(BOOL)arg1 ;
-(void)closeArchive;
-(id)init;
-(BOOL)valid;
-(void)dealloc;
-(id)initWithOutputURL:(id)arg1 compress:(BOOL)arg2 ;
-(void)addDirectoryToArchive:(id)arg1 ;
-(void)addFileToArchive:(id)arg1 ;
@end

