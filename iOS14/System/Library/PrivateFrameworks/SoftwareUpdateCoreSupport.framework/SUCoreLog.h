/*
* Generated on Thursday, January 14, 2021 at 2:28:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCoreSupport.framework/SoftwareUpdateCoreSupport
*/


@protocol OS_os_log;
@class NSObject, NSString;

@interface SUCoreLog : NSObject {

	NSObject*<OS_os_log> _oslog;
	NSString* _category;

}

@property (nonatomic,retain,readonly) NSObject*<OS_os_log> oslog;              //@synthesize oslog=_oslog - In the implementation block
@property (nonatomic,retain,readonly) NSString * category;                     //@synthesize category=_category - In the implementation block
+(id)sharedLogger;
-(NSString *)category;
-(NSObject*<OS_os_log>)oslog;
-(id)initWithCategory:(id)arg1 ;
@end

