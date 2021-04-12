/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModifying.h>

@class NSString;

@interface SXDefaultButtonComponentTextStyleModifier : NSObject <SXDOMModifying> {

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

