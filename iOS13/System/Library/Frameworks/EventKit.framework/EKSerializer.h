/*
* Generated on Monday, March 1, 2021 at 2:32:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
*/


@protocol EKSerializer
@required
-(id)version;
-(id)serializeEvent:(id)arg1 error:(id*)arg2;
-(id)deserializeData:(id)arg1 error:(id*)arg2;
-(id)versionFromData:(id)arg1 error:(id*)arg2;

@end

