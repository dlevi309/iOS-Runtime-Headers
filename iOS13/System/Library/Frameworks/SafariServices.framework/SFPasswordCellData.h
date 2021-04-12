/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class WBSSavedPassword, NSString;

@interface SFPasswordCellData : NSObject {

	BOOL _isWeakPassword;
	BOOL _isReusedPassword;
	WBSSavedPassword* _savedPassword;

}

@property (nonatomic,readonly) WBSSavedPassword * savedPassword;              //@synthesize savedPassword=_savedPassword - In the implementation block
@property (assign,nonatomic) BOOL isWeakPassword;                             //@synthesize isWeakPassword=_isWeakPassword - In the implementation block
@property (assign,nonatomic) BOOL isReusedPassword;                           //@synthesize isReusedPassword=_isReusedPassword - In the implementation block
@property (nonatomic,copy,readonly) NSString * highLevelDomain; 
+(id)passwordCellDataWithSavedPassword:(id)arg1 ;
-(id)initWithSavedPassword:(id)arg1 ;
-(NSString *)highLevelDomain;
-(WBSSavedPassword *)savedPassword;
-(BOOL)isWeakPassword;
-(void)setIsWeakPassword:(BOOL)arg1 ;
-(BOOL)isReusedPassword;
-(void)setIsReusedPassword:(BOOL)arg1 ;
@end

