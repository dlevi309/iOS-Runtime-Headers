/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/VUIMediaLibraryIdentifier.h>

@class NSURL, NSString;

@interface VUIPlistMediaLibraryIdentifier : NSObject <VUIMediaLibraryIdentifier> {

	NSURL* _libraryFileURL;

}

@property (nonatomic,copy) NSURL * libraryFileURL;                  //@synthesize libraryFileURL=_libraryFileURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSURL *)libraryFileURL;
-(void)setLibraryFileURL:(NSURL *)arg1 ;
@end

