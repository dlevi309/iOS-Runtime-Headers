/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

#import <CoreDAV/CoreDAVResponseBodyParser.h>

@class NSError, NSString;

@interface CoreDAVNullParser : NSObject <CoreDAVResponseBodyParser> {

	NSError* _parserError;

}

@property (readonly) NSError * parserError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canHandleContentType:(id)arg1 ;
-(NSError *)parserError;
-(BOOL)processData:(id)arg1 forTask:(id)arg2 ;
@end

