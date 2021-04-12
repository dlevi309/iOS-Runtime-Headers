/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSMutableDictionary, NSString, NSArray;

@interface PKPaymentPreference : NSObject {

	NSMutableDictionary* _errors;
	BOOL _isReadOnly;
	BOOL _supportsDeletion;
	NSString* _title;
	NSString* _footer;
	/*^block*/id _footerLinkActionBlock;
	NSArray* _preferences;
	unsigned long long _selectedIndex;
	unsigned long long _pendingIndex;
	NSRange _footerLinkRange;

}

@property (nonatomic,retain) NSMutableDictionary * errors;                  //@synthesize errors=_errors - In the implementation block
@property (nonatomic,copy) NSString * title;                                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * footer;                               //@synthesize footer=_footer - In the implementation block
@property (assign,nonatomic) NSRange footerLinkRange;                       //@synthesize footerLinkRange=_footerLinkRange - In the implementation block
@property (nonatomic,copy) id footerLinkActionBlock;                        //@synthesize footerLinkActionBlock=_footerLinkActionBlock - In the implementation block
@property (nonatomic,copy) NSArray * preferences;                           //@synthesize preferences=_preferences - In the implementation block
@property (assign,nonatomic) unsigned long long selectedIndex;              //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (assign,nonatomic) unsigned long long pendingIndex;               //@synthesize pendingIndex=_pendingIndex - In the implementation block
@property (assign,nonatomic) BOOL isReadOnly;                               //@synthesize isReadOnly=_isReadOnly - In the implementation block
@property (nonatomic,readonly) BOOL supportsDeletion;                       //@synthesize supportsDeletion=_supportsDeletion - In the implementation block
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSMutableDictionary *)errors;
-(void)setPreferences:(NSArray *)arg1 ;
-(NSArray *)preferences;
-(unsigned long long)selectedIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(NSString *)footer;
-(void)setFooter:(NSString *)arg1 ;
-(BOOL)isReadOnly;
-(void)setErrors:(NSMutableDictionary *)arg1 ;
-(id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(void)setErrors:(id)arg1 forPreference:(id)arg2 ;
-(id)errorsForPreference:(id)arg1 ;
-(void)clearAllErrors;
-(NSRange)footerLinkRange;
-(void)setFooterLinkRange:(NSRange)arg1 ;
-(id)footerLinkActionBlock;
-(void)setFooterLinkActionBlock:(id)arg1 ;
-(unsigned long long)pendingIndex;
-(void)setPendingIndex:(unsigned long long)arg1 ;
-(void)setIsReadOnly:(BOOL)arg1 ;
-(BOOL)supportsDeletion;
@end

