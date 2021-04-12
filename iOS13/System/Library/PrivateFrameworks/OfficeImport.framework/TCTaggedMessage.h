/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

