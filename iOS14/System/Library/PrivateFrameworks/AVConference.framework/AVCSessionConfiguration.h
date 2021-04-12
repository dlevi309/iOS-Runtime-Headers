/*
* Generated on Thursday, January 14, 2021 at 2:25:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol NSCopying;
@class NSObject;

@interface AVCSessionConfiguration : NSObject {

	long long _sessionMode;
	NSObject*<NSCopying> _reportingHierarchyToken;
	BOOL _oneToOneModeEnabled;

}

@property (assign,nonatomic) long long sessionMode; 
@property (nonatomic,copy) NSObject*<NSCopying> reportingHierarchyToken;                         //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
@property (assign,getter=isOneToOneModeEnabled,nonatomic) BOOL oneToOneModeEnabled;              //@synthesize oneToOneModeEnabled=_oneToOneModeEnabled - In the implementation block
+(long long)clientSessionModeWithSessionMode:(long long)arg1 ;
+(long long)sessionModeWithClientSessionMode:(long long)arg1 ;
-(id)dictionary;
-(NSObject*<NSCopying>)reportingHierarchyToken;
-(void)setReportingHierarchyToken:(NSObject*<NSCopying>)arg1 ;
-(void)dealloc;
-(long long)sessionMode;
-(void)setSessionMode:(long long)arg1 ;
-(BOOL)isOneToOneModeEnabled;
-(void)setOneToOneModeEnabled:(BOOL)arg1 ;
-(void)setUpWithDictionary:(id)arg1 ;
@end

