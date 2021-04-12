/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivityViewController.h>

@class NSString;

@interface _SFOpenInOtherAppActivityViewController : _SFActivityViewController {

	NSString* _filePath;

}

@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(BOOL)canOpenWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
+(id)_applicationsForDocumentProxy:(id)arg1 ;
+(id)_activityItemsForFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
-(void)setFilePath:(NSString *)arg1 ;
-(NSString *)filePath;
-(void)_prepareActivity:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
@end

