/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreDialogResponseButtonAction;

@interface ICStoreDialogResponseButton : NSObject <NSCopying> {

	BOOL _isDefaultButton;
	long long _type;
	NSString* _title;
	ICStoreDialogResponseButtonAction* _action;

}

@property (nonatomic,readonly) long long type;                                               //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL isDefaultButton;                                         //@synthesize isDefaultButton=_isDefaultButton - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) ICStoreDialogResponseButtonAction * action;              //@synthesize action=_action - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)title;
-(ICStoreDialogResponseButtonAction *)action;
-(id)initWithType:(long long)arg1 isDefaultButton:(BOOL)arg2 title:(id)arg3 action:(id)arg4 ;
-(BOOL)isDefaultButton;
@end

