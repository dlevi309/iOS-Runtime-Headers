/*
* Generated on Monday, March 1, 2021 at 2:34:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
*/

#import <libobjc.A.dylib/ICSAppendable.h>

@class NSMutableString, NSString;

@interface ICSStringWriter : NSObject <ICSAppendable> {

	NSMutableString* _result;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(id)result;
-(id)mutableResult;
@end

