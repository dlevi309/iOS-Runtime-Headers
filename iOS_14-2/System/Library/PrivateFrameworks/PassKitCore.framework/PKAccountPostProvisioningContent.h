/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class NSString;

@interface PKAccountPostProvisioningContent : NSObject {

	unsigned long long _type;
	NSString* _title;
	NSString* _subTitle;
	NSString* _body;
	NSString* _primaryButtonTitle;
	NSString* _secondaryButtonTitle;

}

@property (assign,nonatomic) unsigned long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subTitle;                          //@synthesize subTitle=_subTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * body;                              //@synthesize body=_body - In the implementation block
@property (nonatomic,copy,readonly) NSString * primaryButtonTitle;                //@synthesize primaryButtonTitle=_primaryButtonTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * secondaryButtonTitle;              //@synthesize secondaryButtonTitle=_secondaryButtonTitle - In the implementation block
-(NSString *)body;
-(NSString *)subTitle;
-(void)setType:(unsigned long long)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)primaryButtonTitle;
-(NSString *)secondaryButtonTitle;
-(unsigned long long)type;
-(NSString *)title;
@end

