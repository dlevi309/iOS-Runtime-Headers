/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@class NSProgress, NSString;

@interface TSUProgressReporter : NSObject <NSProgressReporting> {

	NSProgress* _progress;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSProgress * progress; 
-(NSProgress *)progress;
-(id)initWithTotalUnitCount:(long long)arg1 ;
@end

