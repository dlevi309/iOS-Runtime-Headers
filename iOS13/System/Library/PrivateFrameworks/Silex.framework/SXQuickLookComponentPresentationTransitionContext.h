/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/NFStateMachineContextType.h>

@class SXQuickLookFile, NSString;

@interface SXQuickLookComponentPresentationTransitionContext : NSObject <NFStateMachineContextType> {

	SXQuickLookFile* _file;

}

@property (nonatomic,readonly) SXQuickLookFile * file;              //@synthesize file=_file - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXQuickLookFile *)file;
-(id)initWithFile:(id)arg1 ;
@end

