/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
*/


@class NSArray;

@interface WFSystemContentWhitelist : NSObject {

	NSArray* _whitelistItems;

}
+(id)defaultSystemWhitelist;
+(id)newWhitelistItemFromPlistEntry:(id)arg1 ;
-(void)dealloc;
-(BOOL)isURLWhitelisted:(id)arg1 ;
-(id)initWithWhitelistURL:(id)arg1 ;
@end

