/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <CoreFoundation/NSUserDefaults.h>

@class NSString, WKPreferenceObserver;

@interface WKUserDefaults : NSUserDefaults {

	NSString* m_suiteName;
	WKPreferenceObserver* m_observer;

}
-(id)initWithSuiteName:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_notifyObserversOfChangeFromValuesForKeys:(id)arg1 toValuesForKeys:(id)arg2 ;
@end

