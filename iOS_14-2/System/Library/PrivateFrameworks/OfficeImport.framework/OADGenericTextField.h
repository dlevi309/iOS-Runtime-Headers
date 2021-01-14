/*
* Generated on Thursday, January 14, 2021 at 2:28:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)guid;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(void)setGuid:(NSString *)arg1 ;
-(id)initWithGuid:(id)arg1 type:(id)arg2 ;
-(BOOL)isSimilarToTextRun:(id)arg1 ;
@end

