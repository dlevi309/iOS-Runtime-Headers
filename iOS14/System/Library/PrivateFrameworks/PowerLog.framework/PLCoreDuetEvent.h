/*
* Generated on Thursday, January 14, 2021 at 2:23:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setProcessName:(NSString *)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(void)setChildBundleIDToWeight:(NSDictionary *)arg1 ;
-(NSString *)processName;
-(void)setEventIntervals:(NSArray *)arg1 ;
-(id)description;
-(unsigned char)updateType;
-(NSString *)bundleID;
-(NSArray *)eventIntervals;
-(void)setUpdateType:(unsigned char)arg1 ;
-(NSDictionary *)childBundleIDToWeight;
@end

