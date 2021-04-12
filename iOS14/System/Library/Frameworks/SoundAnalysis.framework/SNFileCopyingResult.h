/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNResult.h>

@class NSString, NSURL;

@interface SNFileCopyingResult : NSObject <SNResult> {

	NSString* _filename;
	long long _fileSize;
	NSURL* _itemURL;

}

@property (nonatomic,retain) NSString * filename;                   //@synthesize filename=_filename - In the implementation block
@property (assign,nonatomic) long long fileSize;                    //@synthesize fileSize=_fileSize - In the implementation block
@property (nonatomic,retain) NSURL * itemURL;                       //@synthesize itemURL=_itemURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)filename;
-(void)setItemURL:(NSURL *)arg1 ;
-(long long)fileSize;
-(NSURL *)itemURL;
-(void)setFilename:(NSString *)arg1 ;
-(void)setFileSize:(long long)arg1 ;
-(id)initWithFileItem:(id)arg1 ;
@end

