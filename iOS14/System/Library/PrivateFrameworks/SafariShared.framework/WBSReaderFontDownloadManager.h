/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

