/*
* Generated on Thursday, January 14, 2021 at 2:23:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/_SFActivityViewController.h>

@class NSString;

@interface _SFOpenInOtherAppActivityViewController : _SFActivityViewController {

	NSString* _filePath;

}

@property (nonatomic,retain) NSString * filePath;              //@synthesize filePath=_filePath - In the implementation block
+(id)_applicationsForDocumentProxy:(id)arg1 ;
+(id)_activityItemsForFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
+(BOOL)canOpenWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
-(NSString *)filePath;
-(id)initWithFilePath:(id)arg1 UTI:(id)arg2 sourceURL:(id)arg3 ;
-(void)setFilePath:(NSString *)arg1 ;
-(void)_prepareActivity:(id)arg1 ;
@end

