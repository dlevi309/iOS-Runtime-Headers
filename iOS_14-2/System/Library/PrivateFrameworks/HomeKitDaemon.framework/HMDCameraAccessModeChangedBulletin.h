/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/


@class NSString, NSDate;

@interface HMDCameraAccessModeChangedBulletin : NSObject {

	NSString* _title;
	NSString* _body;
	NSString* _threadIdentifier;
	NSDate* _dateOfOccurrence;

}

@property (copy,readonly) NSString * title;                         //@synthesize title=_title - In the implementation block
@property (copy,readonly) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (copy,readonly) NSString * threadIdentifier;              //@synthesize threadIdentifier=_threadIdentifier - In the implementation block
@property (copy,readonly) NSDate * dateOfOccurrence;                //@synthesize dateOfOccurrence=_dateOfOccurrence - In the implementation block
+(id)bulletinForAccessMode:(unsigned long long)arg1 camera:(id)arg2 home:(id)arg3 changeReason:(unsigned long long)arg4 changeDate:(id)arg5 ;
+(id)localizedMessageForCameraAccessModeChange:(unsigned long long)arg1 changeReason:(unsigned long long)arg2 camera:(id)arg3 ;
-(NSString *)threadIdentifier;
-(NSString *)body;
-(NSDate *)dateOfOccurrence;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 dateOfOccurrence:(id)arg4 ;
@end

