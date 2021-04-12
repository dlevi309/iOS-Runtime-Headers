/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <libobjc.A.dylib/SXDOMModificationContext.h>
@class SXLayoutOptions, NSString;


@protocol SXDOMModificationContext <NSObject>
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions; 
@property (nonatomic,readonly) NSString * specVersion; 
@required
-(SXLayoutOptions *)layoutOptions;
-(NSString *)specVersion;

@end


@class SXLayoutOptions, NSString;

@interface SXDOMModificationContext : NSObject <SXDOMModificationContext> {

	SXLayoutOptions* _layoutOptions;
	NSString* _specVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) NSString * specVersion;                       //@synthesize specVersion=_specVersion - In the implementation block
-(SXLayoutOptions *)layoutOptions;
-(NSString *)specVersion;
-(id)initWithLayoutOptions:(id)arg1 specVersion:(id)arg2 ;
@end

