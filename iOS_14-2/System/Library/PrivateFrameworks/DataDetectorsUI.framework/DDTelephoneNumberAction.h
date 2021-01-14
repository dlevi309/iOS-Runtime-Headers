/*
* Generated on Thursday, January 14, 2021 at 2:25:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
*/

#import <DataDetectorsUI/DataDetectorsUI-Structs.h>
#import <DataDetectorsUI/DDAction.h>

@class NSString;

@interface DDTelephoneNumberAction : DDAction {

	NSString* _phoneNumber;
	NSString* _body;

}
-(id)icon;
-(id)initWithURL:(id)arg1 result:(_DDResult*)arg2 context:(id)arg3 ;
-(id)contactsMatchingPhoneNumber:(id)arg1 inContactStore:(id)arg2 ;
-(id)labelToUseForEmail:(id)arg1 ofContact:(id)arg2 ;
-(id)labelToUseForPhoneNumber:(id)arg1 ofContact:(id)arg2 ;
-(id)contactAndLabelForPhoneNumber:(id*)arg1 ;
@end

