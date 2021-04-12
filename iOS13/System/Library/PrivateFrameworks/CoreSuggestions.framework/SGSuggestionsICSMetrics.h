/*
* Generated on Monday, March 1, 2021 at 2:32:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject {

	SGMFoundInAppsICS* _foundInAppsICS;

}

@property (nonatomic,retain) SGMFoundInAppsICS * foundInAppsICS;              //@synthesize foundInAppsICS=_foundInAppsICS - In the implementation block
+(id)instance;
+(void)recordWithTimezoneValue:(SGMFoundInAppsICSTZValue_)arg1 datetimeType:(SGMFoundInAppsDatetimeType_)arg2 ;
-(id)init;
-(SGMFoundInAppsICS *)foundInAppsICS;
-(void)setFoundInAppsICS:(SGMFoundInAppsICS *)arg1 ;
@end

