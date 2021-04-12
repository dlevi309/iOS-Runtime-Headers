/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
*/


@class DKExtensionAdapter, NSMutableSet;

@interface DKReportingConcurrentRequest : NSObject {

	DKExtensionAdapter* _generator;
	NSMutableSet* _manifest;

}

@property (nonatomic,retain) DKExtensionAdapter * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSMutableSet * manifest;                     //@synthesize manifest=_manifest - In the implementation block
+(id)concurrentRequestWithGenerator:(id)arg1 ;
-(DKExtensionAdapter *)generator;
-(void)setGenerator:(DKExtensionAdapter *)arg1 ;
-(id)initWithGenerator:(id)arg1 ;
-(NSMutableSet *)manifest;
-(void)setManifest:(NSMutableSet *)arg1 ;
@end

