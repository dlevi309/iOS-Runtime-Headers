/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSMutableArray, NSArray;

@interface PFCloudKitErrorLog : NSObject {

	NSMutableArray* _entries;

}

@property (nonatomic,readonly) NSArray * entries; 
-(id)init;
-(void)logEncounteredError:(id)arg1 withAnnotation:(id)arg2 ;
-(NSArray *)entries;
-(id)description;
-(void)dealloc;
@end

