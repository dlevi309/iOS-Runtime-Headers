/*
* Generated on Thursday, January 14, 2021 at 2:27:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
*/


@class NSProgress;

@interface _CopyfileCallbackCtx : NSObject {

	BOOL _doArchive;
	BOOL _doUnarchive;
	NSProgress* _progress;
	unsigned long long _generationSize;

}

@property (assign,nonatomic) BOOL doArchive;                                 //@synthesize doArchive=_doArchive - In the implementation block
@property (assign,nonatomic) BOOL doUnarchive;                               //@synthesize doUnarchive=_doUnarchive - In the implementation block
@property (assign,nonatomic) unsigned long long generationSize;              //@synthesize generationSize=_generationSize - In the implementation block
@property (nonatomic,readonly) NSProgress * progress;                        //@synthesize progress=_progress - In the implementation block
-(NSProgress *)progress;
-(id)initWithPath:(const char*)arg1 error:(id*)arg2 ;
-(void)setDoArchive:(BOOL)arg1 ;
-(void)setDoUnarchive:(BOOL)arg1 ;
-(unsigned long long)generationSize;
-(void)setGenerationSize:(unsigned long long)arg1 ;
-(BOOL)doArchive;
-(BOOL)doUnarchive;
@end

