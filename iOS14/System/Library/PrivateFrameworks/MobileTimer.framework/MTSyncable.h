/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

@class NSString, NSDate;


@protocol MTSyncable <MTSyncableObject>
@property (nonatomic,readonly) unsigned long long syncType; 
@property (nonatomic,readonly) float syncVersion; 
@property (nonatomic,readonly) NSString * syncIdentifier; 
@property (nonatomic,readonly) NSDate * syncDate; 
@required
-(NSDate *)syncDate;
-(unsigned long long)syncType;
-(NSString *)syncIdentifier;
-(float)syncVersion;

@end

