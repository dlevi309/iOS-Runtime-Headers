/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface TSKChangeGroup : NSObject <NSCopying> {

	NSMutableArray* mChangesArray;

}

@property (nonatomic,readonly) NSMutableArray * changesArray; 
-(id)init;
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)registerChange:(int)arg1 details:(id)arg2 forChangeSource:(id)arg3 ;
-(NSMutableArray *)changesArray;
@end

