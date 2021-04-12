/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShazamKit.framework/ShazamKit
*/


@protocol SHMatcher <NSObject>
@property (assign,nonatomic,__weak) id<SHMatcherDelegate> delegate; 
@required
-(id<SHMatcherDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)matchSignature:(id)arg1;

@end

