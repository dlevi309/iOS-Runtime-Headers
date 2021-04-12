/*
* Generated on Monday, March 1, 2021 at 2:35:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <OfficeImport/OADTextField.h>

@class NSString;

@interface OADGenericTextField : OADTextField {

	NSString* _guid;
	NSString* _type;

}

@property (nonatomic,copy) NSString * guid;              //@synthesize guid=_guid - In the implementation block
@property (nonatomic,copy) NSString * type;              //@synthesize type=_type - In the implementation block
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(id)initWithGuid:(id)arg1 type:(id)arg2 ;
-(BOOL)isSimilarToTextRun:(id)arg1 ;
@end

