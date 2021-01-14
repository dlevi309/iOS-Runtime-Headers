/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/

#import <libobjc.A.dylib/_CNHandleStringClassificationStrategy.h>

@class NSString;

@interface _CNRegExHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)doesStringLookLikePhoneNumber:(id)arg1 ;
+(id)makePhoneNumberRegex;
+(id)makeEmailRegex;
+(BOOL)doesStringLookLikeEmailAddress:(id)arg1 ;
-(unsigned long long)classificationOfHandleString:(id)arg1 ;
@end

