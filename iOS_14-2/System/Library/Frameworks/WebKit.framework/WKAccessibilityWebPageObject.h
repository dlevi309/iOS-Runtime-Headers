/*
* Generated on Thursday, January 14, 2021 at 2:21:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)accessibilityHitTest:(CGPoint)arg1 ;
-(void)_accessibilityCategoryInstalled:(id)arg1 ;
-(double)pageScale;
-(void)setRemoteTokenData:(NSData *)arg1 ;
-(NSData *)remoteTokenData;
-(void)dealloc;
@end

