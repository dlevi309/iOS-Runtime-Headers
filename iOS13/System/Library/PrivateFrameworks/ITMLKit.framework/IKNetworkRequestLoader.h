/*
* Generated on Monday, March 1, 2021 at 2:31:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

@class NSString;


@protocol IKNetworkRequestLoader <NSObject>
@property (nonatomic,copy) NSString * parentIdentifier; 
@property (nonatomic,copy,readonly) NSString * identifier; 
@required
-(NSString *)identifier;
-(NSString *)parentIdentifier;
-(void)setParentIdentifier:(id)arg1;
-(id)recordForResource:(long long)arg1 withInitiator:(long long)arg2;

@end

