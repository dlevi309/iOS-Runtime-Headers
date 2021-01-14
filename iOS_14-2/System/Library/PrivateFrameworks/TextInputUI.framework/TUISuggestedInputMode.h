/*
* Generated on Thursday, January 14, 2021 at 2:21:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
*/


@class NSString;

@interface TUISuggestedInputMode : NSObject {

	BOOL _enabled;
	NSString* _identifier;
	NSString* _displayName;

}

@property (nonatomic,retain) NSString * identifier;               //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL enabled;                        //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
@end

