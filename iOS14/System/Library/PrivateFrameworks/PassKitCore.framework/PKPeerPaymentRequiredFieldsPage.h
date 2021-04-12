/*
* Generated on Thursday, January 14, 2021 at 2:21:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(NSString *)localizedTitle;
-(NSString *)localizedDescription;
-(id)initWithDictionary:(id)arg1 fieldOptions:(id)arg2 ;
-(void)setRequiredFields:(NSArray *)arg1 ;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(NSArray *)requiredFields;
@end

