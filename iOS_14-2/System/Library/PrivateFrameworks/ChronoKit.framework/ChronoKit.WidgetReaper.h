/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChronoKit.framework/ChronoKit
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress;

@interface ChronoKit.WidgetReaper : NSObject <NSProgressReporting> {

	 progress;
	 candidateURLsToRemove;
	 candidateURLsToRemoveWithProtectedChildren;
	 urlsToProtect;
	 objectWillChange;
	 fileManager;

}

@property (retain,nonatomic) NSProgress * progress; 
-(NSProgress *)progress;
-(id)init;
-(void)setProgress:(NSProgress *)arg1 ;
@end

