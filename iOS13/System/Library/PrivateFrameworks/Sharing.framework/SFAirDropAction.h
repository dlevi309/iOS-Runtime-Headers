/*
* Generated on Monday, March 1, 2021 at 2:30:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface SFAirDropAction : NSObject <NSSecureCoding> {

	BOOL _requiresUnlockedUI;
	BOOL _shouldUpdateUserResponse;
	NSString* _localizedTitle;
	NSString* _singleItemLocalizedTitle;
	NSString* _actionIdentifier;
	NSString* _transferIdentifier;
	unsigned long long _minRequiredTransferState;
	unsigned long long _maxTransferState;
	/*^block*/id _actionHandler;

}

@property (nonatomic,copy,readonly) NSString * transferIdentifier;                     //@synthesize transferIdentifier=_transferIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long minRequiredTransferState;              //@synthesize minRequiredTransferState=_minRequiredTransferState - In the implementation block
@property (assign,nonatomic) unsigned long long maxTransferState;                      //@synthesize maxTransferState=_maxTransferState - In the implementation block
@property (assign,nonatomic) BOOL requiresUnlockedUI;                                  //@synthesize requiresUnlockedUI=_requiresUnlockedUI - In the implementation block
@property (assign,nonatomic) BOOL shouldUpdateUserResponse;                            //@synthesize shouldUpdateUserResponse=_shouldUpdateUserResponse - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                                  //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * singleItemLocalizedTitle;                        //@synthesize singleItemLocalizedTitle=_singleItemLocalizedTitle - In the implementation block
@property (nonatomic,copy) id actionHandler;                                           //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * actionIdentifier;                       //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(NSString *)actionIdentifier;
-(NSString *)transferIdentifier;
-(id)initWithTransferIdentifier:(id)arg1 actionIdentifier:(id)arg2 title:(id)arg3 singleItemTitle:(id)arg4 ;
-(void)triggerAction;
-(NSString *)singleItemLocalizedTitle;
-(void)setSingleItemLocalizedTitle:(NSString *)arg1 ;
-(unsigned long long)minRequiredTransferState;
-(void)setMinRequiredTransferState:(unsigned long long)arg1 ;
-(unsigned long long)maxTransferState;
-(void)setMaxTransferState:(unsigned long long)arg1 ;
-(BOOL)requiresUnlockedUI;
-(void)setRequiresUnlockedUI:(BOOL)arg1 ;
-(BOOL)shouldUpdateUserResponse;
-(void)setShouldUpdateUserResponse:(BOOL)arg1 ;
@end

