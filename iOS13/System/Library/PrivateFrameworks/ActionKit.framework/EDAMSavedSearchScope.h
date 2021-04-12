/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

