/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModifying.h>

@class NSString;

@interface SXDefaultComponentTextStyleModifier : NSObject <SXDOMModifying> {

	BOOL _shouldReturnUnmodifiedDOM;

}

@property (assign,nonatomic) BOOL shouldReturnUnmodifiedDOM;              //@synthesize shouldReturnUnmodifiedDOM=_shouldReturnUnmodifiedDOM - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
-(BOOL)shouldReturnUnmodifiedDOM;
-(void)setShouldReturnUnmodifiedDOM:(BOOL)arg1 ;
@end
