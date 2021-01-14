/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/


@class NSString;

@interface TCTaggedMessage : NSObject {

	int mMessageTag;
	NSString* mMessageText;

}

@property (nonatomic,readonly) int messageTag; 
@property (nonatomic,copy,readonly) NSString * messageText; 
+(id)taggedMessageWithMessageText:(id)arg1 ;
-(NSString *)messageText;
-(id)initWithMessageText:(id)arg1 ;
-(int)messageTag;
@end

