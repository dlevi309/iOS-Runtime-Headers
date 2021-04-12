/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

@class SGRecordId, NSString;


@protocol CNSuggested <NSObject>
@property (getter=isSuggested,nonatomic,readonly) BOOL suggested; 
@property (nonatomic,readonly) SGRecordId * suggestionRecordId; 
@property (nonatomic,readonly) NSString * suggestionFoundInBundleId; 
@required
-(BOOL)isSuggested;
-(SGRecordId *)suggestionRecordId;
-(NSString *)suggestionFoundInBundleId;

@end

