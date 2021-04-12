/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXActionFactory.h>

@protocol SXURLActionFactory;
@class NSString;

@interface SXLinkActionFactory : NSObject <SXActionFactory> {

	id<SXURLActionFactory> _URLActionFactory;

}

@property (nonatomic,readonly) id<SXURLActionFactory> URLActionFactory;              //@synthesize URLActionFactory=_URLActionFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithURLActionFactory:(id)arg1 ;
-(id)actionForURL:(id)arg1 ;
-(id)actionForAddition:(id)arg1 ;
-(id<SXURLActionFactory>)URLActionFactory;
@end

