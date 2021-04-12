/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATException.h>

@class NSArray, NSString;

@interface EDAMInvalidContactsException : FATException {

	NSArray* _contacts;
	NSString* _parameter;
	NSArray* _reasons;

}

@property (nonatomic,retain) NSArray * contacts;                //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,retain) NSString * parameter;              //@synthesize parameter=_parameter - In the implementation block
@property (nonatomic,retain) NSArray * reasons;                 //@synthesize reasons=_reasons - In the implementation block
+(id)structName;
+(id)structFields;
-(NSArray *)reasons;
-(void)setReasons:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(NSString *)parameter;
-(void)setParameter:(NSString *)arg1 ;
@end

