/*
* Generated on Thursday, January 14, 2021 at 2:27:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
*/


@class NSThread, CoreThemeDocument;

@interface TDThreadMOCOrganizer : NSObject {

	NSThread* mainThread;
	CoreThemeDocument* document;

}
-(id)init;
-(id)document;
-(id)mainMOC;
-(id)mainThread;
-(id)initWithDocument:(id)arg1 mainThread:(id)arg2 ;
-(id)threadMOC;
-(void)setThreadMOC:(id)arg1 ;
@end

