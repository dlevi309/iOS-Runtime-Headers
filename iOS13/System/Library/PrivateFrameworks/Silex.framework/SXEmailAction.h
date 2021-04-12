/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * type; 
-(NSString *)type;
-(NSString *)subject;
-(NSString *)recipient;
-(id)initWithRecipient:(id)arg1 subject:(id)arg2 ;
@end

