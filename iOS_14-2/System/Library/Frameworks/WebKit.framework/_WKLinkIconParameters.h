/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSURL, NSString, NSNumber, NSDictionary;

@interface _WKLinkIconParameters : NSObject {

	RetainPtr<NSURL>* _url;
	long long _iconType;
	RetainPtr<NSString>* _mimeType;
	RetainPtr<NSNumber>* _size;
	RetainPtr<NSMutableDictionary>* _attributes;

}

@property (nonatomic,copy,readonly) NSURL * url; 
@property (nonatomic,readonly) long long iconType; 
@property (nonatomic,copy,readonly) NSString * mimeType; 
@property (nonatomic,copy,readonly) NSNumber * size; 
@property (nonatomic,copy,readonly) NSDictionary * attributes; 
-(NSString *)mimeType;
-(NSNumber *)size;
-(NSURL *)url;
-(NSDictionary *)attributes;
-(long long)iconType;
-(id)_initWithLinkIcon:(const LinkIcon*)arg1 ;
@end

