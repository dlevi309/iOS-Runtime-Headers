/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <DiskImages2/DIBaseParams.h>

@class NSURL, FileLocalXPC;

@interface DIConvertParams : DIBaseParams {

	BOOL _inPlaceConversion;
	long long _outputFormat;
	unsigned long long _maxRawUDIFRunSize;
	NSURL* _outputURL;
	FileLocalXPC* _outputBackendXPC;

}

@property (nonatomic,retain) NSURL * outputURL;                                 //@synthesize outputURL=_outputURL - In the implementation block
@property (nonatomic,retain) FileLocalXPC * outputBackendXPC;                   //@synthesize outputBackendXPC=_outputBackendXPC - In the implementation block
@property (nonatomic,readonly) BOOL inPlaceConversion;                          //@synthesize inPlaceConversion=_inPlaceConversion - In the implementation block
@property (assign,nonatomic) long long outputFormat;                            //@synthesize outputFormat=_outputFormat - In the implementation block
@property (assign,nonatomic) unsigned long long maxRawUDIFRunSize;              //@synthesize maxRawUDIFRunSize=_maxRawUDIFRunSize - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setOutputFormat:(long long)arg1 ;
-(long long)outputFormat;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)outputURL;
-(void)setOutputURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(BOOL)convertWithError:(id*)arg1 ;
-(id)initWithURL:(id)arg1 fileOpenMode:(unsigned short)arg2 error:(id*)arg3 ;
-(BOOL)inPlaceConversion;
-(unsigned long long)maxRawUDIFRunSize;
-(FileLocalXPC *)outputBackendXPC;
-(void)setOutputBackendXPC:(FileLocalXPC *)arg1 ;
-(id)initWithInputURL:(id)arg1 outputURL:(id)arg2 error:(id*)arg3 ;
-(id)initForInplaceWithURL:(id)arg1 error:(id*)arg2 ;
-(void)setMaxRawUDIFRunSize:(unsigned long long)arg1 ;
@end

