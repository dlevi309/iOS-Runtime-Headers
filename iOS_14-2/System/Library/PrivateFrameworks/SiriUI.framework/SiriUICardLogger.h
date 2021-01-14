/*
* Generated on Thursday, January 14, 2021 at 2:24:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@class NSDateFormatter;

@interface SiriUICardLogger : NSObject {

	NSDateFormatter* _dateFormatter;

}
+(id)_sharedInstance;
+(id)logCard:(id)arg1 ;
+(id)logCardData:(id)arg1 format:(unsigned long long)arg2 ;
+(id)logCard:(id)arg1 format:(unsigned long long)arg2 ;
+(id)logCardData:(id)arg1 ;
-(id)_dateFormatter;
-(id)init;
-(id)_nowString;
-(id)_currentFilenameForFormat:(unsigned long long)arg1 ;
@end

