/*
* Generated on Thursday, January 14, 2021 at 2:27:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/


@class NSString;

@interface CRKWebClipBundleIdentifier : NSObject {

	NSString* _stringValue;

}

@property (nonatomic,copy,readonly) NSString * stringValue;                                              //@synthesize stringValue=_stringValue - In the implementation block
@property (getter=isWebClipHostApplication,nonatomic,readonly) BOOL webClipHostApplication; 
@property (getter=isSpecificWebClip,nonatomic,readonly) BOOL specificWebClip; 
+(id)webClipBundleIdentifierInString:(id)arg1 ;
+(id)webClipHostApplicationBundleIdentifier;
+(id)specificWebClipPrefix;
+(id)bundleIdentifierByLocatingWebClipBundleIdentifierInString:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)init;
-(NSString *)stringValue;
-(BOOL)isWebClipHostApplication;
-(BOOL)isSpecificWebClip;
@end

