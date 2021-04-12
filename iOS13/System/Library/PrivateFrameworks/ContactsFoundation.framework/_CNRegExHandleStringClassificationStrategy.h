/*
* Generated on Monday, March 1, 2021 at 2:30:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)doesStringLookLikeEmailAddress:(id)arg1 ;
+(id)makePhoneNumberRegex;
+(id)makeEmailRegex;
-(unsigned long long)classificationOfHandleString:(id)arg1 ;
@end

