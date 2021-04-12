/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
*/

#import <libobjc.A.dylib/FAFamilySetupPrompterDelegate.h>

@protocol AAUIFamilySetupPrompterDelegate;
@class FAFamilySetupPrompter, NSString;

@interface AAUIFamilySetupPrompter : NSObject <FAFamilySetupPrompterDelegate> {

	FAFamilySetupPrompter* _familySetupPrompter;
	id<AAUIFamilySetupPrompterDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AAUIFamilySetupPrompterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<AAUIFamilySetupPrompterDelegate>)delegate;
-(void)setDelegate:(id<AAUIFamilySetupPrompterDelegate>)arg1 ;
-(id)initWithiTunesAccount:(id)arg1 ;
-(void)promptIfEligibleWithPresentingViewController:(id)arg1 isFirstRun:(BOOL)arg2 ;
-(void)familySetupPrompterDidFinish:(id)arg1 ;
@end

