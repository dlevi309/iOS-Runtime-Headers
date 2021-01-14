/*
* Generated on Thursday, January 14, 2021 at 2:21:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKFocusedElementInfo.h>

@class NSString;

@interface WKFocusedElementInfo : NSObject <_WKFocusedElementInfo> {

	long long _type;
	RetainPtr<NSString>* _value;
	BOOL _isUserInitiated;
	RetainPtr<NSObject<NSSecureCoding> >* _userObject;
	RetainPtr<NSString>* _placeholder;
	RetainPtr<NSString>* _label;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,copy,readonly) NSString * value; 
@property (nonatomic,copy,readonly) NSString * placeholder; 
@property (nonatomic,copy,readonly) NSString * label; 
@property (getter=isUserInitiated,nonatomic,readonly) BOOL userInitiated; 
@property (nonatomic,readonly) NSObject*<NSSecureCoding> userObject; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSObject*<NSSecureCoding>)userObject;
-(id)initWithFocusedElementInformation:(const FocusedElementInformation*)arg1 isUserInitiated:(BOOL)arg2 userObject:(id)arg3 ;
-(long long)type;
-(NSString *)placeholder;
-(BOOL)isUserInitiated;
-(NSString *)label;
-(NSString *)value;
@end

