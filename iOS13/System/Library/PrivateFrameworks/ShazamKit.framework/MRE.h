/*
* Generated on Monday, March 1, 2021 at 2:35:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


#import <ShazamKit/ShazamKit-Structs.h>
@interface MRE : NSObject {

	void* _mreInstance;

}

@property (assign,nonatomic) void* mreInstance;              //@synthesize mreInstance=_mreInstance - In the implementation block
-(void)dealloc;
-(id)initWithSignatures:(id)arg1 density:(long long)arg2 error:(id*)arg3 ;
-(id)search:(id)arg1 error:(id*)arg2 ;
-(void)setMreInstance:(void*)arg1 ;
-(void)FillUnknownError:(id*)arg1 ;
-(void)ConvertException:(const exception*)arg1 toError:(id*)arg2 ;
-(void)ConvertSystemError:(const system_error*)arg1 toError:(id*)arg2 ;
-(id)initWithMREInstance:(MREInstance*)arg1 error:(id*)arg2 ;
-(id)initWithBundle:(id)arg1 cacheDir:(id)arg2 density:(long long)arg3 bufferSize:(long long)arg4 error:(id*)arg5 ;
-(void*)mreInstance;
-(id)initWithBundle:(id)arg1 cacheDir:(id)arg2 density:(long long)arg3 error:(id*)arg4 ;
-(id)metadataForSongId:(id)arg1 error:(id*)arg2 ;
@end

