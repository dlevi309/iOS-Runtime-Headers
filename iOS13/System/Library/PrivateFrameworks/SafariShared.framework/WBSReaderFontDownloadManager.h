/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class NSMutableDictionary;

@interface WBSReaderFontDownloadManager : NSObject {

	NSMutableDictionary* _fontFamilyToProgress;

}
+(id)sharedManager;
-(id)init;
-(void)downloadFont:(id)arg1 ;
-(double)downloadProgressForFont:(id)arg1 ;
-(BOOL)hasOngoingRequestForFont:(id)arg1 ;
@end

