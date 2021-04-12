/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableArray, NSArray;

@interface PFCloudKitErrorLog : NSObject {

	NSMutableArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries; 
-(id)init;
-(void)dealloc;
-(id)description;
-(NSArray *)entries;
-(void)logEncounteredError:(id)arg1 withAnnotation:(id)arg2 ;
@end

