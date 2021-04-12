/*
* Generated on Monday, March 1, 2021 at 2:33:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
*/

#import <AudioServerDriver/AudioServerDriver-Structs.h>
#import <libobjc.A.dylib/ASDRingBuffer.h>
@class ASDStreamFormat;


@protocol ASDRingBuffer <NSObject>
@property (assign,nonatomic) long long frameCapacity; 
@property (nonatomic,copy) ASDStreamFormat * writeFormat; 
@property (nonatomic,copy) ASDStreamFormat * readFormat; 
@property (nonatomic,readonly) id writeBlock; 
@property (nonatomic,readonly) id readBlock; 
@property (nonatomic,readonly) id readWithZerosBlock; 
@property (getter=isAllocated,nonatomic,readonly) BOOL allocated; 
@required
-(void)clear;
-(long long)frameCapacity;
-(ASDStreamFormat *)readFormat;
-(ASDStreamFormat *)writeFormat;
-(BOOL)isAllocated;
-(void)allocate;
-(void)deallocate;
-(void)setFrameCapacity:(long long)arg1;
-(void)setWriteFormat:(id)arg1;
-(void)setReadFormat:(id)arg1;
-(id)writeBlock;
-(id)readBlock;
-(id)readWithZerosBlock;

@end


@class ASDStreamFormat, NSString;

@interface ASDRingBuffer : NSObject <ASDRingBuffer> {

	unique_ptr<AudioRingBuffer, std::__1::default_delete<AudioRingBuffer> >* _ringBuffer;
	BOOL _allocated;
	long long _frameCapacity;
	ASDStreamFormat* _writeFormat;
	ASDStreamFormat* _readFormat;

}

@property (assign,getter=isAllocated,nonatomic) BOOL allocated;              //@synthesize allocated=_allocated - In the implementation block
@property (assign,nonatomic) long long frameCapacity;                        //@synthesize frameCapacity=_frameCapacity - In the implementation block
@property (nonatomic,copy) ASDStreamFormat * writeFormat;                    //@synthesize writeFormat=_writeFormat - In the implementation block
@property (nonatomic,copy) ASDStreamFormat * readFormat;                     //@synthesize readFormat=_readFormat - In the implementation block
@property (nonatomic,readonly) id writeBlock; 
@property (nonatomic,readonly) id readBlock; 
@property (nonatomic,readonly) id readWithZerosBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clear;
-(long long)frameCapacity;
-(id)initWithFrameCapacity:(long long)arg1 writeFormat:(id)arg2 readFormat:(id)arg3 ;
-(ASDStreamFormat *)readFormat;
-(ASDStreamFormat *)writeFormat;
-(void)setAllocated:(BOOL)arg1 ;
-(BOOL)isAllocated;
-(void)allocate;
-(void)deallocate;
-(void)setFrameCapacity:(long long)arg1 ;
-(void)setWriteFormat:(ASDStreamFormat *)arg1 ;
-(void)setReadFormat:(ASDStreamFormat *)arg1 ;
-(id)writeBlock;
-(id)readBlock;
-(id)readWithZerosBlock;
-(id)initWithFrameCapacity:(long long)arg1 ;
@end

