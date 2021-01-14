/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

