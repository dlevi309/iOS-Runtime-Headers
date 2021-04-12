/*
* Generated on Thursday, January 14, 2021 at 2:23:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
*/


#import <Metal/Metal-Structs.h>
@class NSData;

@interface MTLLoadedFile : NSObject {

	NSData* _fileData;
	LoaderGlobalState* _parent;
	long long _modifiedTimeWhenCached;
	FileIdentifier _identity;
	BOOL _isCached;

}

@property (readonly) NSData * contents;              //@synthesize fileData=_fileData - In the implementation block
-(NSData *)contents;
-(id)initWithData:(id)arg1 parent:(LoaderGlobalState*)arg2 ;
-(void)dealloc;
@end

