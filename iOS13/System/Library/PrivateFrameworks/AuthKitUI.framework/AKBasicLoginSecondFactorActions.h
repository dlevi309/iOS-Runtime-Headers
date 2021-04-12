/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKitUI.framework/AuthKitUI
*/

#import <AuthKitUI/AuthKitUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AKBasicLoginSecondFactorActions : NSObject <NSCopying> {

	/*^block*/id _regenerateCodeAction;
	/*^block*/id _codeEnteredAction;
	/*^block*/id _ak_cancelAction;

}

@property (nonatomic,copy) id regenerateCodeAction;              //@synthesize regenerateCodeAction=_regenerateCodeAction - In the implementation block
@property (nonatomic,copy) id codeEnteredAction;                 //@synthesize codeEnteredAction=_codeEnteredAction - In the implementation block
@property (nonatomic,copy) id ak_cancelAction;                   //@synthesize ak_cancelAction=_ak_cancelAction - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)ak_cancelAction;
-(void)setAk_cancelAction:(id)arg1 ;
-(id)regenerateCodeAction;
-(void)setRegenerateCodeAction:(id)arg1 ;
-(id)codeEnteredAction;
-(void)setCodeEnteredAction:(id)arg1 ;
@end

