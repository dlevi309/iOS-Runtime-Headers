/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSMutableArray, NSString;

@interface MFFileCompressionQueue : NSObject <EFLoggable> {

	os_unfair_lock_s _fileCompressionQueueLock;
	NSMutableArray* _fileCompressionQueue;

}

@property (nonatomic,retain) NSMutableArray * fileCompressionQueue;              //@synthesize fileCompressionQueue=_fileCompressionQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)log;
-(void)addFile:(id)arg1 ;
-(id)init;
-(long long)size;
-(BOOL)hasNext;
-(id)nextFile;
-(NSMutableArray *)fileCompressionQueue;
-(void)setFileCompressionQueue:(NSMutableArray *)arg1 ;
@end

