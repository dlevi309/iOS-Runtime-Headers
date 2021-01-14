/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <libobjc.A.dylib/OCDDelayedMediaContext.h>

@class NSString;

@interface ESDBlipContext : NSObject <OCDDelayedMediaContext> {

	SsrwOOStream* mStream;
	unsigned mStreamID;
	unsigned mStartOffset;
	unsigned mByteCount;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SsrwOOStream*)stream;
-(NSString *)description;
-(id)dataRep;
-(BOOL)loadDelayedNode:(id)arg1 ;
-(id)initWithOffset:(unsigned)arg1 byteCount:(unsigned)arg2 stream:(SsrwOOStream*)arg3 streamID:(unsigned)arg4 ;
-(BOOL)saveDelayedMedia:(id)arg1 toFile:(id)arg2 ;
@end

