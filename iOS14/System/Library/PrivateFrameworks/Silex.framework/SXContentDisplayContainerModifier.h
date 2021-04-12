/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSMutableDictionary *)containers;
-(id)init;
-(void)modifyDOM:(id)arg1 context:(id)arg2 ;
-(void)ensureWrappingContainerComponentForComponents:(id)arg1 parentComponent:(id)arg2 ;
@end

