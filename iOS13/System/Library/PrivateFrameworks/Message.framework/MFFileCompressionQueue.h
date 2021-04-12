/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <Message/Message-Structs.h>
#import <libobjc.A.dylib/EFLoggable.h>

@class NSMutableArray, NSString;

@interface MFFileCompressionQueue : NSObject <EFLoggable> {

	os_unfair_lock_s _fileCompressionQueueLock;
	NSMutableArray* _fileCompressionQueue;

}

@property (nonatomic,retain) NSMutableArray * fileCompressionQueue;                  //@synthesize fileCompressionQueue=_fileCompressionQueue - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s fileCompressionQueueLock;              //@synthesize fileCompressionQueueLock=_fileCompressionQueueLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(id)log;
-(id)init;
-(long long)size;
-(void)addFile:(id)arg1 ;
-(BOOL)hasNext;
-(id)nextFile;
-(NSMutableArray *)fileCompressionQueue;
-(void)setFileCompressionQueue:(NSMutableArray *)arg1 ;
-(os_unfair_lock_s)fileCompressionQueueLock;
-(void)setFileCompressionQueueLock:(os_unfair_lock_s)arg1 ;
@end

