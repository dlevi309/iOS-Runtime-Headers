/*
* Generated on Monday, March 1, 2021 at 2:33:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModifying.h>

@class NSMutableDictionary, NSString;

@interface SXContentDisplayContainerModifier : NSObject <SXDOMModifying> {

	NSMutableDictionary* _containers;

}

@property (nonatomic,readonly) NSMutableDictionary * containers;              //@synthesize containers=_containers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSMutableDictionary *)containers;
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
-(void)ensureWrappingContainerComponentForComponents:(id)arg1 parentComponent:(id)arg2 ;
@end

