/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

