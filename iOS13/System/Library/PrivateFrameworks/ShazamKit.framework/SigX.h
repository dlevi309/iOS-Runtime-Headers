/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


#import <ShazamKit/ShazamKit-Structs.h>
@interface SigX : NSObject {

	void* _mySigX;

}

@property (assign,nonatomic) void* mySigX;              //@synthesize mySigX=_mySigX - In the implementation block
+(basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >)getVersion;
-(void)dealloc;
-(BOOL)resetWithError:(id*)arg1 ;
-(BOOL)flowIntSamples:(short*)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id*)arg4 ;
-(BOOL)flowFloatSamples:(float*)arg1 sampleCount:(int)arg2 channels:(int)arg3 error:(id*)arg4 ;
-(BOOL)flowBuffer:(id)arg1 error:(id*)arg2 ;
-(id)initWithSignatureType:(int)arg1 sampleRate:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)getSignature:(vector<char, std::__1::allocator<char> >Ref)arg1 error:(id*)arg2 ;
-(id)initWithSignatureType:(int)arg1 sampleRate:(unsigned)arg2 signatureOptions:(int)arg3 error:(id*)arg4 ;
-(BOOL)flowIntSamples:(const short*)arg1 sampleCount:(int)arg2 error:(id*)arg3 ;
-(BOOL)flowFloatSamples:(float*)arg1 sampleCount:(int)arg2 error:(id*)arg3 ;
-(void*)mySigX;
-(void)setMySigX:(void*)arg1 ;
-(void)FillUnknownError:(id*)arg1 ;
-(void)ConvertException:(const exception*)arg1 toError:(id*)arg2 ;
-(void)ConvertSystemError:(const system_error*)arg1 toError:(id*)arg2 ;
@end
