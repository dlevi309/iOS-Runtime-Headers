/*
* Generated on Monday, March 1, 2021 at 2:32:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/FileProvider.framework/FileProvider
*/


#import <FileProvider/FileProvider-Structs.h>
@class NSProgress, NSMutableDictionary;

@interface _FPCopyFileStatus : NSObject {

	NSProgress* _progress;
	NSMutableDictionary* _lastBytesCopiedByFile;

}

@property (retain) NSProgress * progress;                                    //@synthesize progress=_progress - In the implementation block
@property (retain) NSMutableDictionary * lastBytesCopiedByFile;              //@synthesize lastBytesCopiedByFile=_lastBytesCopiedByFile - In the implementation block
-(id)init;
-(NSProgress *)progress;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)updateCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(void)beginCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(void)finishCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(NSMutableDictionary *)lastBytesCopiedByFile;
-(void)setLastBytesCopiedByFile:(NSMutableDictionary *)arg1 ;
@end

