/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol NSCopying;
@class NSObject;

@interface VCSessionConfiguration : NSObject {

	long long _sessionMode;
	NSObject*<NSCopying> _reportingHierarchyToken;
	BOOL _oneToOneModeEnabled;

}

@property (assign,nonatomic) long long sessionMode;                                              //@synthesize sessionMode=_sessionMode - In the implementation block
@property (nonatomic,retain) NSObject*<NSCopying> reportingHierarchyToken;                       //@synthesize reportingHierarchyToken=_reportingHierarchyToken - In the implementation block
@property (assign,getter=isOneToOneModeEnabled,nonatomic) BOOL oneToOneModeEnabled;              //@synthesize oneToOneModeEnabled=_oneToOneModeEnabled - In the implementation block
-(id)init;
-(NSObject*<NSCopying>)reportingHierarchyToken;
-(void)setReportingHierarchyToken:(NSObject*<NSCopying>)arg1 ;
-(void)dealloc;
-(long long)sessionMode;
-(BOOL)applyConfigurationUsingClientDict:(id)arg1 ;
-(void)setSessionMode:(long long)arg1 ;
-(id)initWithClientDictionary:(id)arg1 ;
-(BOOL)updateWithClientDictionary:(id)arg1 ;
-(BOOL)isOneToOneModeEnabled;
-(void)setOneToOneModeEnabled:(BOOL)arg1 ;
@end

