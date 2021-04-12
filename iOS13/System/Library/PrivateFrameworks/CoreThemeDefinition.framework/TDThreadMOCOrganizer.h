/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {

	NSThread* mainThread;
	CoreThemeDocument* document;

}
-(id)init;
-(id)mainThread;
-(id)document;
-(id)initWithDocument:(id)arg1 mainThread:(id)arg2 ;
-(id)threadMOC;
-(id)mainMOC;
-(void)setThreadMOC:(id)arg1 ;
@end

