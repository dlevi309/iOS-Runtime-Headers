/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSArray, NSString;

@interface PKPeerPaymentRequiredFieldsPage : NSObject {

	NSArray* _requiredFields;
	NSString* _localizedTitle;
	NSString* _localizedDescription;

}

@property (nonatomic,retain) NSArray * requiredFields;                   //@synthesize requiredFields=_requiredFields - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                    //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedDescription;              //@synthesize localizedDescription=_localizedDescription - In the implementation block
-(NSString *)localizedDescription;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSArray *)requiredFields;
-(id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2 ;
-(void)setRequiredFields:(NSArray *)arg1 ;
@end

