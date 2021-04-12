/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


@class NSString;

@interface EspressoDataFrameMappedFile : NSObject {

	int file_id;
	unsigned long long length;
	NSString* _path;
	char* _basePtr;

}

@property (retain) NSString * path;              //@synthesize path=_path - In the implementation block
@property (assign) char* basePtr;                //@synthesize basePtr=_basePtr - In the implementation block
-(void)dealloc;
-(NSString *)path;
-(id)initWithPath:(id)arg1 ;
-(void)setPath:(NSString *)arg1 ;
-(char*)basePtr;
-(void)setBasePtr:(char*)arg1 ;
@end

