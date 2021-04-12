/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)footer;
-(BOOL)isReadOnly;
-(NSArray *)preferences;
-(void)setTitle:(NSString *)arg1 ;
-(void)setPreferences:(NSArray *)arg1 ;
-(void)setFooter:(NSString *)arg1 ;
-(unsigned long long)pendingIndex;
-(void)setSelectedIndex:(unsigned long long)arg1 ;
-(id)initWithTitle:(id)arg1 preferences:(id)arg2 selectedIndex:(unsigned long long)arg3 readOnly:(BOOL)arg4 ;
-(void)setErrors:(id)arg1 forPreference:(id)arg2 ;
-(id)errorsForPreference:(id)arg1 ;
-(void)clearAllErrors;
-(BOOL)preferenceObject:(id)arg1 representsContact:(id)arg2 ;
-(NSRange)footerLinkRange;
-(void)setFooterLinkRange:(NSRange)arg1 ;
-(id)footerLinkActionBlock;
-(void)setFooterLinkActionBlock:(id)arg1 ;
-(void)setPendingIndex:(unsigned long long)arg1 ;
-(void)setIsReadOnly:(BOOL)arg1 ;
-(BOOL)supportsDeletion;
-(unsigned long long)selectedIndex;
-(NSMutableDictionary *)errors;
-(void)setErrors:(NSMutableDictionary *)arg1 ;
-(NSString *)title;
@end

