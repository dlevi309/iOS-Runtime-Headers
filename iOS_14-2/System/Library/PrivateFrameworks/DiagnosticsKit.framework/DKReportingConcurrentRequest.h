/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithGenerator:(id)arg1 ;
-(NSMutableSet *)manifest;
-(void)setManifest:(NSMutableSet *)arg1 ;
-(void)setGenerator:(DKExtensionAdapter *)arg1 ;
-(DKExtensionAdapter *)generator;
@end

