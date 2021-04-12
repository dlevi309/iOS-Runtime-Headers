/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)stringValue;
-(id)initWithString:(id)arg1 ;
-(BOOL)isWebClipHostApplication;
-(BOOL)isSpecificWebClip;
@end

