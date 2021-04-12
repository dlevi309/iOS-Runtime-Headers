/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/


@class NSDateFormatter;

@interface SiriUICardLogger : NSObject {

	NSDateFormatter* _dateFormatter;

}
+(id)_sharedInstance;
+(id)logCardData:(id)arg1 format:(unsigned long long)arg2 ;
+(id)logCard:(id)arg1 format:(unsigned long long)arg2 ;
+(id)logCardData:(id)arg1 ;
+(id)logCard:(id)arg1 ;
-(id)init;
-(id)_dateFormatter;
-(id)_nowString;
-(id)_currentFilenameForFormat:(unsigned long long)arg1 ;
@end

