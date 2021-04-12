/*
* Generated on Monday, March 1, 2021 at 2:30:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@interface SFSearchViewAppearFeedback : SFFeedback {

	BOOL _isOnLockScreen;
	BOOL _isOverApp;
	BOOL _readerTextAvailable;
	unsigned long long _viewAppearEvent;

}

@property (assign,nonatomic) unsigned long long viewAppearEvent;              //@synthesize viewAppearEvent=_viewAppearEvent - In the implementation block
@property (assign,nonatomic) BOOL isOnLockScreen;                             //@synthesize isOnLockScreen=_isOnLockScreen - In the implementation block
@property (assign,nonatomic) BOOL isOverApp;                                  //@synthesize isOverApp=_isOverApp - In the implementation block
@property (assign,nonatomic) BOOL readerTextAvailable;                        //@synthesize readerTextAvailable=_readerTextAvailable - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(unsigned long long)viewAppearEvent;
-(void)setViewAppearEvent:(unsigned long long)arg1 ;
-(BOOL)isOnLockScreen;
-(void)setIsOnLockScreen:(BOOL)arg1 ;
-(BOOL)isOverApp;
-(void)setIsOverApp:(BOOL)arg1 ;
-(BOOL)readerTextAvailable;
-(void)setReaderTextAvailable:(BOOL)arg1 ;
@end

