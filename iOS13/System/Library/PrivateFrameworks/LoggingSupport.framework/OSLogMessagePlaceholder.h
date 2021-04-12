/*
* Generated on Monday, March 1, 2021 at 2:32:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
*/


#import <LoggingSupport/LoggingSupport-Structs.h>
@class NSString, NSArray;

@interface OSLogMessagePlaceholder : NSObject {

	os_log_fmt_cspec_s* _placeholder;
	NSString* _placeholderString;
	NSArray* _placeholderTokens;

}

@property (nonatomic,readonly) NSString * rawString; 
@property (nonatomic,readonly) NSArray * tokens; 
@property (nonatomic,readonly) NSString * typeNamespace; 
@property (nonatomic,readonly) NSString * type; 
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int precision; 
-(void)dealloc;
-(NSString *)type;
-(int)width;
-(int)precision;
-(NSArray *)tokens;
-(NSString *)rawString;
-(id)initWithPlaceholderStruct:(os_log_fmt_cspec_s*)arg1 ;
-(NSString *)typeNamespace;
@end

