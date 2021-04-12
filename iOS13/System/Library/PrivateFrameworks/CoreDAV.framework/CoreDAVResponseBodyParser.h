/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
*/

@class NSError;


@protocol CoreDAVResponseBodyParser <NSObject>
@property (readonly) NSError * parserError; 
@optional
+(BOOL)canHandleContentType:(id)arg1;

@required
-(NSError *)parserError;
-(BOOL)processData:(id)arg1 forTask:(id)arg2;

@end

