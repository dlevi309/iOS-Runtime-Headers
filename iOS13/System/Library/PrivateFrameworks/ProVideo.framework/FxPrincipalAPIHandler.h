/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/

#import <libobjc.A.dylib/PROAPIObject.h>

@protocol FxPlugPrincipalDelegate;
@class NSObject, NSString;

@interface FxPrincipalAPIHandler : NSObject <PROAPIObject> {

	NSObject*<FxPlugPrincipalDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)delegate;
-(void)setDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)conformsToProtocol:(id)arg1 version:(unsigned)arg2 ;
-(id)servicePrincipal;
@end

