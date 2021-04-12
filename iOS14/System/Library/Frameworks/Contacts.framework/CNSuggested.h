/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

@class SGRecordId, NSString;


@protocol CNSuggested <NSObject>
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (nonatomic,readonly) NSString * suggestionFoundInBundleId; 
@required
-(NSString *)suggestionFoundInBundleId;
-(SGRecordId *)suggestionRecordId;
-(BOOL)isSuggested;

@end

