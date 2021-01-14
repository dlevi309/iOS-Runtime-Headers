/*
* Generated on Thursday, January 14, 2021 at 2:22:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class NSArray, NSSet;

@interface PXCMMComposeRecipientDataSource : NSObject {

	NSArray* _composeRecipients;
	NSSet* _recipients;

}

@property (nonatomic,copy) NSSet * recipients;                                //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy,readonly) NSArray * composeRecipients;              //@synthesize composeRecipients=_composeRecipients - In the implementation block
+(id)new;
-(NSSet *)recipients;
-(id)initWithComposeRecipients:(id)arg1 recipients:(id)arg2 ;
-(unsigned long long)indexOfComposeRecipientForRecipient:(id)arg1 ;
-(id)init;
-(void)setRecipients:(NSSet *)arg1 ;
-(NSArray *)composeRecipients;
@end

