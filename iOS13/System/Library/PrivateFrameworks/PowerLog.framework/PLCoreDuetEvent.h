/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerLog.framework/PowerLog
*/


@class NSString, NSDictionary, NSArray;

@interface PLCoreDuetEvent : NSObject {

	unsigned char _updateType;
	NSString* _bundleID;
	NSString* _processName;
	NSDictionary* _childBundleIDToWeight;
	NSArray* _eventIntervals;

}

@property (retain) NSString * bundleID;                               //@synthesize bundleID=_bundleID - In the implementation block
@property (assign) unsigned char updateType;                          //@synthesize updateType=_updateType - In the implementation block
@property (retain) NSString * processName;                            //@synthesize processName=_processName - In the implementation block
@property (retain) NSDictionary * childBundleIDToWeight;              //@synthesize childBundleIDToWeight=_childBundleIDToWeight - In the implementation block
@property (retain) NSArray * eventIntervals;                          //@synthesize eventIntervals=_eventIntervals - In the implementation block
-(id)description;
-(NSString *)processName;
-(void)setProcessName:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(unsigned char)updateType;
-(NSArray *)eventIntervals;
-(NSDictionary *)childBundleIDToWeight;
-(void)setUpdateType:(unsigned char)arg1 ;
-(void)setChildBundleIDToWeight:(NSDictionary *)arg1 ;
-(void)setEventIntervals:(NSArray *)arg1 ;
@end

