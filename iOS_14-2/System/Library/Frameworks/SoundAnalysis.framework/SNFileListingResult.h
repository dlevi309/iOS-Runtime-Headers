/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/

#import <libobjc.A.dylib/SNResult.h>

@class NSArray, NSString;

@interface SNFileListingResult : NSObject <SNResult> {

	NSArray* _fileItems;

}

@property (nonatomic,retain) NSArray * fileItems;                   //@synthesize fileItems=_fileItems - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFileItems:(NSArray *)arg1 ;
-(NSArray *)fileItems;
-(id)initWithFileItems:(id)arg1 ;
@end

