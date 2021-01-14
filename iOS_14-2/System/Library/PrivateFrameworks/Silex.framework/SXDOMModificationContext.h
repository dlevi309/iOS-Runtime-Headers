/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) SXLayoutOptions * layoutOptions;              //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (nonatomic,readonly) NSString * specVersion;                       //@synthesize specVersion=_specVersion - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXLayoutOptions *)layoutOptions;
-(NSString *)specVersion;
-(id)initWithLayoutOptions:(id)arg1 specVersion:(id)arg2 ;
@end

