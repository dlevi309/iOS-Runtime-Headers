/*
* Generated on Monday, March 1, 2021 at 2:30:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/

#import <WebKit/WebKit-Structs.h>
#import <WebKit/WKAccessibilityWebPageObjectBase.h>

@class NSData;

@interface WKAccessibilityWebPageObject : WKAccessibilityWebPageObjectBase {

	NSData* _remoteTokenData;

}

@property (nonatomic,retain) NSData * remoteTokenData;              //@synthesize remoteTokenData=_remoteTokenData - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_accessibilityCategoryInstalled:(id)arg1 ;
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(double)pageScale;
-(NSData *)remoteTokenData;
-(void)setRemoteTokenData:(NSData *)arg1 ;
@end

