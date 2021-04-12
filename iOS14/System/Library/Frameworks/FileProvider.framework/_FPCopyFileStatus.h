/*
* Generated on Thursday, January 14, 2021 at 2:23:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSProgress *)progress;
-(id)init;
-(void)updateCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(void)beginCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(void)finishCopyingFile:(id)arg1 state:(copyfile_stateRef)arg2 ;
-(NSMutableDictionary *)lastBytesCopiedByFile;
-(void)setLastBytesCopiedByFile:(NSMutableDictionary *)arg1 ;
-(void)setProgress:(NSProgress *)arg1 ;
@end

