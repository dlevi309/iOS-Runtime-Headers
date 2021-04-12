/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSURL *)libraryFileURL;
-(void)setLibraryFileURL:(NSURL *)arg1 ;
@end

