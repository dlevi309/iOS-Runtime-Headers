/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)FillUnknownError:(id*)arg1 ;
-(BOOL)ConvertException:(const exception*)arg1 toError:(id*)arg2 ;
-(BOOL)ConvertSystemError:(const system_error*)arg1 toError:(id*)arg2 ;
-(id)initWithMREInstance:(MREInstance*)arg1 error:(id*)arg2 ;
-(id)initWithBundle:(id)arg1 cacheDir:(id)arg2 density:(long long)arg3 bufferSize:(long long)arg4 error:(id*)arg5 ;
-(void*)mreInstance;
-(id)initWithBundle:(id)arg1 cacheDir:(id)arg2 density:(long long)arg3 error:(id*)arg4 ;
-(id)metadataForSongId:(id)arg1 error:(id*)arg2 ;
@end

