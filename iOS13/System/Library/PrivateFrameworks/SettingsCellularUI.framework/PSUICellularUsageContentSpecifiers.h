/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/


@class NSArray, NSMutableArray;

@interface PSUICellularUsageContentSpecifiers : NSObject {

	NSArray* _leadingContentSpecifiers;
	NSMutableArray* _appSpecifiers;
	NSArray* _trailingContentSpecifiers;

}

@property (nonatomic,retain) NSArray * leadingContentSpecifiers;               //@synthesize leadingContentSpecifiers=_leadingContentSpecifiers - In the implementation block
@property (nonatomic,retain) NSMutableArray * appSpecifiers;                   //@synthesize appSpecifiers=_appSpecifiers - In the implementation block
@property (nonatomic,retain) NSArray * trailingContentSpecifiers;              //@synthesize trailingContentSpecifiers=_trailingContentSpecifiers - In the implementation block
-(id)specifiers;
-(NSMutableArray *)appSpecifiers;
-(void)setAppSpecifiers:(NSMutableArray *)arg1 ;
-(NSArray *)leadingContentSpecifiers;
-(void)setLeadingContentSpecifiers:(NSArray *)arg1 ;
-(NSArray *)trailingContentSpecifiers;
-(void)setTrailingContentSpecifiers:(NSArray *)arg1 ;
@end

