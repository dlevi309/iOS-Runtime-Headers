/*
* Generated on Thursday, January 14, 2021 at 2:22:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
*/

#import <SearchFoundation/SFFeedback.h>

@class NSString;

@interface SFSearchViewAppearFeedback : SFFeedback {

	BOOL _isOnLockScreen;
	BOOL _isOverApp;
	BOOL _readerTextAvailable;
	unsigned long long _viewAppearEvent;
	NSString* _preexistingInput;

}

@property (assign,nonatomic) unsigned long long viewAppearEvent;              //@synthesize viewAppearEvent=_viewAppearEvent - In the implementation block
@property (assign,nonatomic) BOOL isOnLockScreen;                             //@synthesize isOnLockScreen=_isOnLockScreen - In the implementation block
@property (assign,nonatomic) BOOL isOverApp;                                  //@synthesize isOverApp=_isOverApp - In the implementation block
@property (assign,nonatomic) BOOL readerTextAvailable;                        //@synthesize readerTextAvailable=_readerTextAvailable - In the implementation block
@property (nonatomic,copy) NSString * preexistingInput;                       //@synthesize preexistingInput=_preexistingInput - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isOnLockScreen;
-(id)initWithEvent:(unsigned long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setPreexistingInput:(NSString *)arg1 ;
-(void)setReaderTextAvailable:(BOOL)arg1 ;
-(NSString *)preexistingInput;
-(void)setViewAppearEvent:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)viewAppearEvent;
-(void)setIsOnLockScreen:(BOOL)arg1 ;
-(BOOL)readerTextAvailable;
-(void)setIsOverApp:(BOOL)arg1 ;
-(BOOL)isOverApp;
@end

