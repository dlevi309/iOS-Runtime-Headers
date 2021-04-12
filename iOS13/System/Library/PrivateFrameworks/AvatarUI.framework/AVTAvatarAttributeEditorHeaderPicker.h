/*
* Generated on Monday, March 1, 2021 at 2:32:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
*/

#import <libobjc.A.dylib/AVTAvatarAttributeEditorHeaderPicker.h>
@class NSArray, NSString;


@protocol AVTAvatarAttributeEditorHeaderPicker <NSObject>
@property (nonatomic,copy,readonly) NSArray * choices; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,readonly) BOOL alwaysPresentAlert; 
@required
-(NSString *)identifier;
-(NSArray *)choices;
-(BOOL)alwaysPresentAlert;

@end


@class NSArray, NSString;

@interface AVTAvatarAttributeEditorHeaderPicker : NSObject <AVTAvatarAttributeEditorHeaderPicker> {

	BOOL _alwaysPresentAlert;
	NSString* _identifier;
	NSArray* _choices;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * choices;                  //@synthesize choices=_choices - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL alwaysPresentAlert;                 //@synthesize alwaysPresentAlert=_alwaysPresentAlert - In the implementation block
+(id)headerPickerFromEditorSection:(id)arg1 ;
+(id)headerPickerForPairableModelCategory:(id)arg1 isPaired:(BOOL)arg2 avatarUpdaterOnPair:(/*^block*/id)arg3 ;
-(NSString *)identifier;
-(NSArray *)choices;
-(BOOL)alwaysPresentAlert;
-(id)initWithIdentifier:(id)arg1 choices:(id)arg2 alwaysPresentAlert:(BOOL)arg3 ;
@end

