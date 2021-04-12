/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
*/


@class DACoreDAVLogger;

@interface CalDAVHTTPTrafficLog : NSObject {

	DACoreDAVLogger* _curLogger;

}

@property (nonatomic,retain) DACoreDAVLogger * curLogger;              //@synthesize curLogger=_curLogger - In the implementation block
+(id)instance;
-(BOOL)enabled;
-(id)init;
-(void)logString:(id)arg1 ;
-(void)setCurLogger:(DACoreDAVLogger *)arg1 ;
-(DACoreDAVLogger *)curLogger;
-(void)finishSnippets;
-(void)logStringWithFormat:(id)arg1 ;
-(void)logData:(id)arg1 ;
@end

