/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXAction.h>

@class NSString;

@interface SXEmailAction : NSObject <SXAction> {

	NSString* _recipient;
	NSString* _subject;

}

@property (nonatomic,readonly) NSString * recipient;                //@synthesize recipient=_recipient - In the implementation block
@property (nonatomic,readonly) NSString * subject;                  //@synthesize subject=_subject - In the implementation block
@property (nonatomic,readonly) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)subject;
-(NSString *)type;
-(NSString *)recipient;
-(id)initWithRecipient:(id)arg1 subject:(id)arg2 ;
@end

