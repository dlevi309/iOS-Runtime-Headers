/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@interface WKPreferenceObserver : NSObject {

	Vector<WTF::RetainPtr<WKUserDefaults>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* m_userDefaults;

}
+(id)sharedInstance;
-(id)init;
-(void)preferenceDidChange:(id)arg1 key:(id)arg2 encodedValue:(id)arg3 ;
@end

