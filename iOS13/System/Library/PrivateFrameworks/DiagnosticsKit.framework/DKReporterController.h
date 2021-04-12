/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

@property (nonatomic,retain) DKReporterContext * context;                            //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) DKComponentIdentity * componentIdentity; 
-(void)beginRequestWithExtensionContext:(id)arg1 ;
-(void)start;
-(DKReporterContext *)context;
-(void)setContext:(DKReporterContext *)arg1 ;
-(BOOL)isPresent;
-(void)setComponentIdentity:(DKComponentIdentity *)arg1 ;
-(void)setupWithContext:(id)arg1 ;
-(void)populateAttributes:(id)arg1 ;
-(DKComponentIdentity *)componentIdentity;
@end

