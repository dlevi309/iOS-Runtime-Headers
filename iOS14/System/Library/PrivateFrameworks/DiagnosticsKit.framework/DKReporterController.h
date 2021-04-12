/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/

#import <libobjc.A.dylib/DKReporter_Internal.h>
#import <libobjc.A.dylib/DKReporter.h>
#import <libobjc.A.dylib/NSExtensionRequestHandling.h>

@class DKComponentIdentity, DKReporterContext, NSString;

@interface DKReporterController : NSObject <DKReporter_Internal, DKReporter, NSExtensionRequestHandling> {

	DKComponentIdentity* _componentIdentity;
	DKReporterContext* _context;

}

@property (nonatomic,retain) DKReporterContext * context;                          //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) DKComponentIdentity * componentIdentity;              //@synthesize componentIdentity=_componentIdentity - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(BOOL)isPresent;
-(DKReporterContext *)context;
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)setContext:(DKReporterContext *)arg1 ;
-(void)setComponentIdentity:(DKComponentIdentity *)arg1 ;
-(void)setupWithContext:(id)arg1 ;
-(void)populateAttributes:(id)arg1 ;
-(DKComponentIdentity *)componentIdentity;
@end

