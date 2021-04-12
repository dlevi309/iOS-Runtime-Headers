/*
* Generated on Thursday, January 14, 2021 at 2:27:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(void)setReasons:(NSArray *)arg1 ;
-(NSString *)parameter;
-(NSArray *)reasons;
-(void)setParameter:(NSString *)arg1 ;
@end

