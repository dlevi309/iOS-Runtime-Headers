/*
* Generated on Thursday, January 14, 2021 at 2:22:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
*/


#import <CoreSuggestions/CoreSuggestions-Structs.h>
@class SGMFoundInAppsICS;

@interface SGSuggestionsICSMetrics : NSObject {

	SGMFoundInAppsICS* _foundInAppsICS;

}

@property (nonatomic,retain) SGMFoundInAppsICS * foundInAppsICS;              //@synthesize foundInAppsICS=_foundInAppsICS - In the implementation block
+(void)recordWithTimezoneValue:(SGMFoundInAppsICSTZValue_)arg1 datetimeType:(SGMFoundInAppsDatetimeType_)arg2 ;
+(id)instance;
-(SGMFoundInAppsICS *)foundInAppsICS;
-(void)setFoundInAppsICS:(SGMFoundInAppsICS *)arg1 ;
-(id)init;
@end

