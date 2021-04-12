/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/


@protocol MTLBuffer;
@class NSString;

@interface FigMetalAllocatorDescriptor : NSObject {

	BOOL _dryRun;
	BOOL _wireMemory;
	NSString* _label;
	unsigned long long _memSize;
	unsigned long long _resourceOptions;
	id<MTLBuffer> _externalBuffer;

}

@property (nonatomic,retain) id<MTLBuffer> externalBuffer;                    //@synthesize externalBuffer=_externalBuffer - In the implementation block
@property (nonatomic,retain) NSString * label;                                //@synthesize label=_label - In the implementation block
@property (assign,nonatomic) unsigned long long memSize;                      //@synthesize memSize=_memSize - In the implementation block
@property (assign,nonatomic) unsigned long long resourceOptions;              //@synthesize resourceOptions=_resourceOptions - In the implementation block
@property (assign,nonatomic) BOOL dryRun;                                     //@synthesize dryRun=_dryRun - In the implementation block
@property (assign,nonatomic) BOOL wireMemory;                                 //@synthesize wireMemory=_wireMemory - In the implementation block
-(void)setDryRun:(BOOL)arg1 ;
-(void)setResourceOptions:(unsigned long long)arg1 ;
-(id)init;
-(unsigned long long)memSize;
-(void)setMemSize:(unsigned long long)arg1 ;
-(BOOL)wireMemory;
-(void)setWireMemory:(BOOL)arg1 ;
-(id<MTLBuffer>)externalBuffer;
-(void)setExternalBuffer:(id<MTLBuffer>)arg1 ;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)dryRun;
-(NSString *)label;
-(unsigned long long)resourceOptions;
@end

