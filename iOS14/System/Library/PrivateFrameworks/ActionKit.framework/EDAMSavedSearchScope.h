/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber;

@interface EDAMSavedSearchScope : FATObject {

	NSNumber* _includeAccount;
	NSNumber* _includePersonalLinkedNotebooks;
	NSNumber* _includeBusinessLinkedNotebooks;

}

@property (nonatomic,retain) NSNumber * includeAccount;                              //@synthesize includeAccount=_includeAccount - In the implementation block
@property (nonatomic,retain) NSNumber * includePersonalLinkedNotebooks;              //@synthesize includePersonalLinkedNotebooks=_includePersonalLinkedNotebooks - In the implementation block
@property (nonatomic,retain) NSNumber * includeBusinessLinkedNotebooks;              //@synthesize includeBusinessLinkedNotebooks=_includeBusinessLinkedNotebooks - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)includeAccount;
-(void)setIncludeAccount:(NSNumber *)arg1 ;
-(NSNumber *)includePersonalLinkedNotebooks;
-(void)setIncludePersonalLinkedNotebooks:(NSNumber *)arg1 ;
-(NSNumber *)includeBusinessLinkedNotebooks;
-(void)setIncludeBusinessLinkedNotebooks:(NSNumber *)arg1 ;
@end

